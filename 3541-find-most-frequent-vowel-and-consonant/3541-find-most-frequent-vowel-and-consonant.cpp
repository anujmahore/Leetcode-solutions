class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        int cf = 0;
        int vf = 0;
        for(auto p:mp){
            char c = p.first;
            int f = p.second;
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vf = max(vf,f);
            }
            else{
                cf = max(cf,f);
            }

        }
        return cf+vf;
    }
};