class Solution {
public:

    int f(int i,int amount,vector<int>&coins,vector<vector<int>>&dp){
        // base cases        
        if(i==0){
            if(amount%coins[i]==0) return amount/coins[i];
            else return 1e9;
        }
        if(dp[i][amount]!=-1) return dp[i][amount];
        int notTake = 0 + f(i-1,amount,coins,dp);
        int Take = INT_MAX;
        if(coins[i]<=amount){
            Take = 1 + f(i,amount-coins[i],coins,dp);
        }

        return dp[i][amount] = min(notTake,Take);

    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ways = f(n-1,amount,coins,dp);
        if(ways>=1e9) return -1;
        return ways;
    }
};