class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        v.push_back({1});
        for(int i=2;i<=numRows;i++){
            vector<int>a(i);
            a[0] = 1;
            a[i-1] = 1;
            for(int j=0;j<v[v.size()-1].size()-1;j++){
                a[j+1] = v[v.size()-1][j] + v[v.size()-1][j+1];
            }

            v.push_back(a);
        }
        return v;
    }
};