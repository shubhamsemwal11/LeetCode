class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        
        sort(strs.begin(), strs.end());
        
        string a = strs[0];
        string b = strs[n - 1];
        
        string result = "";
        int size = a.size();
        
        for(int i = 0; i < size; i++) {
            
            if(a[i] == b[i])
                result += a[i];
            
            else
                break;
        }
        
        return result;
    }
};