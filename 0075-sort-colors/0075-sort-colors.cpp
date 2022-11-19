class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int p0 = 0, p1 = 0, p2 = n - 1;
        
        while(p1 <= p2) {
            
            if(nums[p1] == 2) {
                
                swap(nums[p1],nums[p2]);
                p2--;
            }
            
            else if(nums[p1] == 0) {
                
                swap(nums[p1], nums[p0]);
                p0++;
                p1++;
            }
            
            else
                p1++;
        }
    }
};