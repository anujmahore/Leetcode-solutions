class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.begin()+nums.size()-k-1+1);
        reverse(nums.begin()+nums.size()-k,nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};