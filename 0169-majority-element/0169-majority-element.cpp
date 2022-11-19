class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int possibleElement = nums[0];
        int count = 0;
        int n = nums.size();
        
        for(int x: nums) {
            
            if(x == possibleElement)
                count++;
            
            else
                count--;
            
            if(count == 0) {
                
                possibleElement = x;
                count = 1;
            }
        }
        
        return possibleElement;
    }
};