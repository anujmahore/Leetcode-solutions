class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        for(int x:answers){
            mp[x]++;
        }
        int ans = 0;
        for(auto p:mp){
            int ele = p.first;
            int freq = p.second; 
            if(ele==0) ans+=freq;        
            else if(freq<ele+1) ans += (ele+1);
            else{
                 int count = ceil(freq/(ele+1.0));
                 ans += ((ele+1)*count);
            }
        }
        return ans;
    }
};