class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int index = s.size() - 1;
        bool wordFound = false;
        int len = 0;
        
        while(index >= 0) {
            
            if(s[index] == ' ' && wordFound == false)
                index--;
            
            if(s[index] == ' ' && wordFound == true)
                break;
            
            if(s[index] != ' ') {
                
                wordFound = true;
                len++;
                index--;
            }
        }
        
        return len;
    }
};