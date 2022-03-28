class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int del=0;
        int n = nums.size();
        for(int i=0; i<n-1 ;i++)
        {
            int newIndex = i-del;       //updating index of elements after deletion 
            if((newIndex % 2 == 0) && nums[i] == nums[i+1]) { 
                del++;
            }
        }
        return ((n-del)%2 == 0) ? del : del+1;    //if size of the updated array is odd then add one more deletion operation
    }
};