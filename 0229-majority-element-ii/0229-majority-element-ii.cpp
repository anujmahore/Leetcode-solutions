class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = n/3;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>ans;
        for(auto p:mp){
            int freq = p.second;
            if(freq>count){
                ans.push_back(p.first);
            }
        }
        return ans;
    
    }
};