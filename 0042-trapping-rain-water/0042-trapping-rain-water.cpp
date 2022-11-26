class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        int left[n];
        left[0] = height[0];
        
        int right[n];
        right[n - 1] = height[n - 1];
        
        int result = 0, area;
        
        for(int i = 1; i < n; i++)
            left[i] = max(height[i], left[i - 1]);
        
        for(int i = n - 2; i >= 0; i--)
            right[i] = max(height[i], right[i + 1]);
        
        for(int i = 0; i < n; i++) {
            
            area = min(left[i], right[i]) - height[i];
            result += area;
        }
        
        return result;
    }
};