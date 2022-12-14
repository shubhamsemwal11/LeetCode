class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 1)
            return nums[0];
        
        
        int dp[n];
        
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        int include, exclude;
        
        for(int i = 2; i < n; i++) {
            
            include = nums[i] + dp[i - 2];
            exclude = dp[i - 1];
            
            dp[i] = max(include, exclude);
        }
        
        return dp[n - 1];
    }
};