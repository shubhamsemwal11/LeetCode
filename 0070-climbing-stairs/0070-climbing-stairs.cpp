class Solution {
public:
    int climbStairs(int n) {
        
        int first = 1;
        int second = 1;
        int third;
        
        if(n == 1 || n == 2)
            return n;
        
        for(int i = 2; i <= n; i++) {
            
            third = first + second;
            first = second;
            second = third;
        }
        
        return third;
    }
};