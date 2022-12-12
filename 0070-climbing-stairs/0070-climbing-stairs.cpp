class Solution {
public:
    int climbStairs(int n) {
        
        /*
        if(n == 1 || n == 2)
            return n;
        
        return climbStairs(n - 1) + climbStairs(n - 2);
        */
        
        if(n == 1 || n == 2)
            return n;
        
        int first = 1, second = 2, third;
        
        for(int i = 3; i <= n; i++) {
            
            third = first + second;
            first = second;
            second = third;
        }
        
        return third;
    }
};