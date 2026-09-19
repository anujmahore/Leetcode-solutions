class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k=2;
        int n = fruits.size();

        int left = 0;
        int ans = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;

            if(mp.size()<=k){
                ans = max(ans,i-left+1);
            }
            else if(mp.size()>k){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)  mp.erase(fruits[left]);
                left++;
            }
        }
        return ans;
    }
};