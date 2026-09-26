class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
       vector<vector<int>>ans(m,vector<int>(n));
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int lr = max(0,i-k);
            int ur = min(m-1,i+k);

            int lc = max(0,j-k);
            int uc = min(n-1,j+k);

            int sum = 0;
            for(int a=lr;a<=ur;a++){
                for(int b=lc;b<=uc;b++){
                    sum+=mat[a][b];
                }
            }
            ans[i][j] = sum;
        }
       }
       return ans;

    }
};