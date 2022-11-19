class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0, j = 0;
        
        int m = t.size();
        int n = s.size();
        
        if(n == 0 && m == 0)
            return true;
        
        for(int i = 0; i < m; i++) {
            
            if(s[j] == t[i])
                j++;
            
            if(j == n)
                return true;
        }
        
        return false;
    }
};