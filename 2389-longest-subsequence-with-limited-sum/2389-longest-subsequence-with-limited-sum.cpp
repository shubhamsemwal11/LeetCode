class Solution {
public:
    
    int binarySearch(vector<int>& nums, int num) {
        
        int start = 0, end = nums.size() - 1, mid;
        
        while(start <= end) {
            
            mid = start + (end - start) / 2;
            
            if(nums[mid] < num)
                start = mid + 1;
            
            else if(nums[mid] > num)
                end = mid - 1;
            
            else
                return mid + 1;
        }
        
        return end + 1;
    }
    
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        int a = nums.size(), b = queries.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < a; i++)
            nums[i] += nums[i - 1];
        
        for(int i = 0; i < b; i++)
            queries[i] = binarySearch(nums, queries[i]);
        
        return queries;
    }
};