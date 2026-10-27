class Solution {
public:

    void dfs(int node,vector<int>&vis,vector<vector<int>>& list){
        vis[node] = 1;

        for(int x:list[node]){
            if(vis[x]==0) dfs(x,vis,list);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        // conversting matrix to list
        int n = isConnected.size();
        vector<vector<int>>list(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    list[i].push_back(j);
                }                
            }
        }

        // finding number of provinces
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,vis,list);
                count++;
            }
        }
        return count;
    
        
    }
};