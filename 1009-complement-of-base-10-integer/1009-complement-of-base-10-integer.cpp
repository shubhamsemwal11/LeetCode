class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n == 0)
            return 1;
        
        int mask = 0, temp = n, result;
        
        while(temp) {
            
            mask = (mask << 1) | 1;
            temp = temp >> 1;
        }
        
        result = (~n) & mask;
        
        return result;
    }
};