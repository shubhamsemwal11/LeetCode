class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 1)
            return true;
        
        long long start = 0, end = num / 2, mid, square;
        
        while(start <= end) {
            
            mid = start + (end - start) / 2;
            square = mid * mid;
            
            if(square == num)
                return true;
            
            else if(square < num )
                start = mid + 1;
            
            else
                end = mid - 1;
        }
        
        return false;
    }
};