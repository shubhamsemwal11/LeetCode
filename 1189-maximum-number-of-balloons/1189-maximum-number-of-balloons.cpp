class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int b = 0, a = 0, l = 0, o = 0, n = 0;
        
        for(char ch: text) {
            
            if(ch == 'b')
                b++;
            
            else if(ch == 'a')
                a++;
            
            else if(ch == 'l')
                l++;
            
            else if(ch == 'o')
                o++;
            
            else if(ch == 'n')
                n++;
        }
        
        return min(b,min(a, min(l / 2, min(o / 2, n))));
    }
};