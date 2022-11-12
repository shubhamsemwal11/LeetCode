class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int maxSoFar = arr[n - 1];
        arr[n - 1] = -1;
        int element;
        
        for(int i = n - 2; i >=0; i--) {
            
            element = arr[i];
            
            arr[i] = maxSoFar;
            maxSoFar = max(maxSoFar, element);
        }
        
        return arr;
    }
};