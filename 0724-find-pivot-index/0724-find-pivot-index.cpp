class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        int left[n];
        int right[n];
        
        left[0] = 0;
        right[n - 1] = 0;
        
        for(int i = 1; i < n; i++)
            left[i] = nums[i - 1] + left[i - 1];
        
        for(int i = n - 2; i >= 0; i--)
            right[i] = nums[i + 1] + right[i + 1];
        
        for(int i = 0; i < n; i++) {
            
            if(left[i] == right[i])
                return i;
        }
        
        return -1;
    }
};