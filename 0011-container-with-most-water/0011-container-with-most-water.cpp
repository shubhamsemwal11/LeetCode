class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        
        int start = 0, end = n - 1, result = 0, area;
        
        while(start < end) {
            
            area = min(height[start], height[end]) * (end - start);
            result = max(result, area);
            
            if(height[start] < height[end])
                start++;
            
            else
                end--;
        }
        
        return result;
    }
};