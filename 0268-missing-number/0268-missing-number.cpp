class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int result = 0;
        
        for(int i: nums)
            result ^= i;
        
        for(int i = 0; i <= n; i++)
            result ^= i;
        
        return result;
        
    }
};