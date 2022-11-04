class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int start, end, target;
        vector<vector<int>> result;
        int sum = 0;
        
        for(int i = 0; i < n - 2; i++) {
            
            if(i == 0 || nums[i] != nums[i - 1]) {
                
                start = i + 1;
                end = n - 1;
                target = -nums[i];
                
                while(start < end) {
                    
                    sum = nums[start] + nums[end];
                    
                    if(sum < target)
                        start++;
                    
                    else if(sum > target)
                        end--;
                    
                    else {
                        
                        result.push_back({nums[start], nums[end], nums[i]});
                        
                        while(start < end && nums[start + 1] == nums[start])
                            start++;
                        
                        while(start < end && nums[end - 1] == nums[end])
                            end--;
                        
                        start++;
                        end--;
                    }
                }
            }
        }
        
        return result;
    }
};