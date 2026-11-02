class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int candidate = 0;
        int count = 0;
        for(int x:nums){
            if(count==0){
                count=1;
                candidate = x;
            }
            else if(x==candidate) count++;
            else count--;
        }
        return candidate;
    }
};