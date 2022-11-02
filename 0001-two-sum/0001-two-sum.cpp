class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> result;
        
        unordered_map<int, int> mp;
        mp[nums[0]] = 0;
        
        int temp;
        
        for(int i = 1; i < n; i++) {
            
            temp = target - nums[i];
            
            if(mp.find(temp) != mp.end()) {
                
                result.push_back(mp[temp]);
                result.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        
        return result;
    }
};