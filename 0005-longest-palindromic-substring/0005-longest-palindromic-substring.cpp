class Solution {
public:
    
    void expand(string& s, int start, int end, string& result) {
        
        int n = s.size();
        
        while(start >= 0 && end < n && s[start] == s[end]) {
            
            start--;
            end++;
        }
        
        string temp = s.substr(start + 1, end - start - 1);
        
        if(temp.size() > result.size())
            result = temp;
    }
    
    string longestPalindrome(string s) {
        
        string result = "";
        int n = s.size();
        
        if(n < 2)
            return s;
        
        for(int i = 0; i < n - 1; i++) {
            
            expand(s, i, i, result);
            expand(s, i, i + 1, result);
        }
        
        return result;
    }
};