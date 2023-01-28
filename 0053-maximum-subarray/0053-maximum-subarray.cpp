class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSoFar = INT_MIN, sum = 0;
        
        for(int x: nums) {
            
            sum += x;
            
            if(sum > maxSoFar)
                maxSoFar = sum;
            
            if(sum < 0)
                sum = 0;
        }
        
        return maxSoFar;
    }
};