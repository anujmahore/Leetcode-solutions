class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0;
        int n = 1;
        vector<int>v(nums.size());
        for(int x:nums){
            if(x>0){
                v[p] = x;
                p+=2;
            }
            else{
                v[n] = x;
                n+=2;
            }
        }
        return v;
    }
};