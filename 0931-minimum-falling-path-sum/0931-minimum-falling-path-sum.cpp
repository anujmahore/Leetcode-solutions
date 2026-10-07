class Solution {
public:
int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp){
    // base conditions
    if(j<0 || j>=matrix.size()) return 1e9;
    if(i==0) return matrix[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int up = matrix[i][j] + f(i-1,j,matrix,dp);
    int ld = matrix[i][j] + f(i-1,j-1,matrix,dp);
    int rd = matrix[i][j] + f(i-1,j+1,matrix,dp);

    return dp[i][j] = min(up,min(ld,rd));
}

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int mini = INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++) dp[0][i] = matrix[0][i];
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int up = matrix[i][j] + dp[i-1][j];
                int ld = INT_MAX;
                if(j-1>=0) ld = matrix[i][j] + dp[i-1][j-1];
                int rd = INT_MAX;
                if(j+1<n) rd = matrix[i][j] + dp[i-1][j+1];
                dp[i][j] = min(up,min(ld,rd));
            }
        }
        for(int j=0;j<n;j++){
            mini = min(mini,dp[n-1][j]);
        }
        return mini;

    }
};