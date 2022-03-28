class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        for(int elem:nums1)
        {
            s1.insert(elem);
        }
        for(int elem:nums2)
        {
           s2.insert(elem);
        }
        vector<vector<int>> ans;
        vector<int>res1,res2;
        for(auto it:s1)
        {
            if(s2.count(it))
            {
                continue;
            }
            else
            {
                res1.push_back(it);
            }
        }
        ans.push_back(res1);
        for(auto it:s2)
        {
            if(s1.count(it))
            {
                continue;
            }
            else
            {
                res2.push_back(it);
            }
        }
        ans.push_back(res2);
    return ans;
    }
};