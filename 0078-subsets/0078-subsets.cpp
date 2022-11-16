class Solution {
public:
    
    void solve(vector<int>& nums, int index, vector<int> output, vector<vector<int>>& result)     {
        
        if(index == nums.size()) {
            
            result.push_back(output);
            return;
        }
        
        solve(nums, index + 1, output, result);
        int element = nums[index];
        
        output.push_back(element);
        
        solve(nums, index + 1, output, result)  ;  
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> output;
        
        solve(nums, 0, output, result);
        
        return result;
    }
};