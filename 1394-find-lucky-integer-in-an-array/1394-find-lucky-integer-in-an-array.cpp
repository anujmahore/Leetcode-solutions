class Solution {
public:
    int findLucky(vector<int>& arr) {
        // hashmap
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        int ans = -1;
        for(auto p:mp){
            int v = p.first;
            int f = p.second;
            if(v==f){
                ans = max(v,ans);
            }
        }
        return ans;
    }
};