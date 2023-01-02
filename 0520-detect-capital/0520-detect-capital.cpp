class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int countCapital = 0;
        bool first = false;
        int n = word.size();
        
        for(int i = 0; i < n; i++) {
            
            if(isupper(word[i])) {
                
                if(i == 0)
                    first = true;
                
                countCapital++;
            }
        }
        
        if(countCapital == n || countCapital == 0)
            return true;
        
        if(countCapital == 1 && first == true)
            return true;
        
        return false;
    }
};