class Solution {
public:
    int maximum69Number (int num) {
        
        int record = -1;
        int x = num;
        int rem;
        int digit = 0;
        
        while(x) {
            
            rem = x % 10;
            if(rem == 6)
                record = digit;
            
            digit++;
            
            x /= 10;
        }
        
        if(record == -1)
            return num;
        
        return (num + (3 * pow(10, record)));
    }
};