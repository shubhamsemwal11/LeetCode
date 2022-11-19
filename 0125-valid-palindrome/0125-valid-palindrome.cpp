class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();
        
        int start = 0, end = n - 1;
        
        while(start < end) {
            
            if(isalnum(s[start]) && isalnum(s[end])) {
                
                if(toupper(s[start]) != toupper(s[end]))
                    return false;
                
                else {
                    
                    start++;
                    end--;
                }
            }
            
            else {
                
                if(isalnum(s[start]))
                    end--;
                
                else
                    start++;
            }
        }
        
        return true;
    }
};