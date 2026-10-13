class Solution {
public:

    int solve(int i, int target, vector<int>& nums,vector<vector<int>>&dp) {

    // Base case
    if(i == 0) {
        if(target % nums[0] == 0)
            return 1;

        return 0;
    }
    if(dp[i][target]!=-1) return dp[i][target];

    // Don't take
    int notTake = solve(i - 1, target, nums,dp);

    // Take
    int take = 0;

    if(nums[i] <= target) {
        take = solve(i, target - nums[i], nums,dp);
    }

    return dp[i][target] = take+ notTake;
}

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(n-1,amount,coins,dp);
    }
};