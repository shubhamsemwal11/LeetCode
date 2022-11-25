class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int start = 0, end = numbers.size() - 1, sum;
        
        vector<int> result;
        
        while(start < end) {
            
            sum = numbers[start] + numbers[end];
            
            if(sum < target)
                start++;
            
            else if(sum > target)
                end--;
            
            else {
                
                result.push_back(start + 1);
                result.push_back(end + 1);
                break;
            }
        }
        
        return result;
    }
};