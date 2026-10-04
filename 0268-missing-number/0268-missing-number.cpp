class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int rsum = ((nums.size()+1)/2.0) * (0+nums.size());
        return rsum-sum;
    }
    
};