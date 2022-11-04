class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int firstOccurance = -1, lastOccurance = -1;
        
        int start = 0, end = n - 1, mid;
        
        while(start <= end) {
            
            mid = start + (end - start) / 2;
            
            if(nums[mid] == target) {
                
                firstOccurance = mid;
                end = mid - 1;
            }
            
            else if(target < nums[mid])
                end = mid - 1;
            
            else
                start = mid + 1;
        }
        
        start = 0, end = n - 1;
        
        while(start <= end) {
            
            mid = start + (end - start) / 2;
            
            if(nums[mid] == target) {
                
                lastOccurance = mid;
                start = mid + 1;
            }
            
            else if(target < nums[mid])
                end = mid - 1;
            
            else
                start = mid + 1;
        }
        
        return {firstOccurance, lastOccurance};
    }
};