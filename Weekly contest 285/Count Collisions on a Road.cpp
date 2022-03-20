class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int cnt = 0;
        int left = 0, right = directions.size()-1;
        while(left<directions.size() && directions[left]=='L')
        {
          left++;
        }
        while(right>=0 && directions[right]=='R')
        {
            right--;
        }
        for(int i=left; i<=right; i++)
        {  if(directions[i]!='S')
            cnt++;
        }
        return cnt;
    }
};