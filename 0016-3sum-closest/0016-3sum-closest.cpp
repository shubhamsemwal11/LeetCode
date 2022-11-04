class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        long long start, end, result = INT_MAX, sum = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 2; i++) {
            
            start = i + 1;
            end = n - 1;
            
            while(start < end) {
                
                sum = nums[start] + nums[end] + nums[i];
                
                if(sum < target)
                    start++;
                
                else
                    end--;
                
                if(abs(sum - target) < abs(result - target))
                    result = sum;
            }
        }
        
        return result;
    }
};