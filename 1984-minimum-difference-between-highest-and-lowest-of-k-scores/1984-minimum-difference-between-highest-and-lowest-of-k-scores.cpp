class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int start = 0, end = k - 1;
        int result = INT_MAX;
        
        while(end < n) {
            
            result = min(result, nums[end] - nums[start]);
            start++;
            end++;
        }
        
        return result;
    }
};