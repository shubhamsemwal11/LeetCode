class Solution {
public:
    
    bool isVowel(char ch) {
        
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch =='E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        
        return false;
    }
    
    bool halvesAreAlike(string s) {
        
        int n = s.size();
        int vowel = 0;
        int i;
        
        for(i = 0; i < n / 2; i++) {
            
            if(isVowel(s[i]))
                vowel++;
        }
        
        for(;i < n; i++) {
            
            if(isVowel(s[i]))
                vowel--;
        }
        
        return (vowel == 0);
    }
};