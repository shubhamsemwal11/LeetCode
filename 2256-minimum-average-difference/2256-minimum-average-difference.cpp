class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n = nums.size();
        
        int result = INT_MAX, index = -1;
        
        long long sum = 0;
        long long curSum = 0;
        int avgDiff;
        
        for(int x: nums)
            sum += x;
        
        int a = 0, b = n - 1;
        
        
        for(int i = 0; i < n; i++) {
            
            curSum += nums[i];
            
            a = i + 1;
            b = n - a;;
            
            if(i == n - 1)
                avgDiff = abs(curSum / a);
            else
                avgDiff = abs(curSum / a - (sum - curSum) / b);
            
            if(avgDiff < result) {
                
                result = avgDiff;
                index = i;
            }
        }
        
        return index;
    }
};