class Solution {
public:
    bool isPalindrome(int x) {
        
        long long reverse = 0, rem, temp = x;
        
        if(x < 0)
            temp = -temp;
        
        while(temp) {
            
            rem = temp % 10;
            reverse = (reverse * 10) + rem;
            temp /= 10;
        }
        
        return (x == reverse);
    }
};