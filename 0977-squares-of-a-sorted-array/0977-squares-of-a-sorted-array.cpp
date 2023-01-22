class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        int start = 0, end = n - 1;
        vector<int> result(n);
        int position = n - 1;
        
        while(start <= end) {
            
            if(abs(nums[start]) > abs(nums[end]))
                result[position--] = nums[start] * nums[start++];
            
            else
                result[position--] = nums[end] * nums[end--];
        }
        
        return result;
    }
};