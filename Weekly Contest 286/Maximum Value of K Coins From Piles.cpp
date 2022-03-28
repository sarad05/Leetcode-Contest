//Memoization solution
class Solution {
    private:
     int f(int ind,int k,vector<vector<int>>&piles,vector<vector<int>>&dp)
     {
        if(ind == piles.size() || k == 0)  return 0;
          if(dp[ind][k]!=-1)   return dp[ind][k];
         int best = f(ind+1,k,piles,dp);
         int sum = 0;
         for(int i = 0; i < min((int)piles[ind].size(),k);i++)
         {
             sum += piles[ind][i];
             best = max(best,sum + f(ind+1,k - (i+1), piles,dp));
         }
         return dp[ind][k] = best;
     }
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        return f(0,k,piles,dp);
    }
};

//Recursive solution

class Solution {
    private:
     int f(int ind,int k,vector<vector<int>>&piles)
     {
        if(ind == piles.size() || k == 0)  return 0;
         int best = f(ind+1,k,piles);
         int sum = 0;
         for(int i = 0; i < min((int)piles[ind].size(),k);i++)
         {
             sum += piles[ind][i];
             best = max(best,sum + f(ind+1,k - (i+1), piles));
         }
         return best;
     }
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        return f(0,k,piles);
    }
};

