class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0 || x == 1)
            return x;
        
        long long result, start = 0, end = x / 2, sqr, mid;
        
        while(start <= end) {
            
            mid = start + (end - start) / 2;
            
            sqr = mid * mid;
            
            if(sqr == x)
                return mid;
            
            else if(sqr < x) {
                
                result = mid;
                start = mid + 1;
            }
            
            else
                end = mid - 1;
        }
        
        return result;
    }
};