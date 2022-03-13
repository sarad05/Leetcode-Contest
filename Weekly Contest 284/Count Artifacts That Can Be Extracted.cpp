class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {     
         //create this hash and mark all of them as visited
        vector<vector<int>> hash(n,vector<int>(n,0));
         
         //go thorough all the digs and mark it as visited
        for(auto it:dig)
        {
            hash[it[0]][it[1]] =1;
        }
        int cnt=0;
        for(auto it:artifacts)
        {
            int x1 = it[0];
            int y1 = it[1];
            int x2 = it[2];
            int y2 = it[3];
            bool flag = true;
            for(int i = x1;i<=x2&& flag ;i++)
            {
                for(int j=y1;j<=y2;j++)
                {
                    if(hash[i][j]==0)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            cnt+=flag;
        }
        return cnt;
    }
};