class Solution {
public:
    
    int dp[5001][301];
    
    int solve(vector<int>& coins, int amount, int n) {
        
        if(amount == 0 && n == 0)
            return 1;
        
        if(amount == 0)
            return 1;
        
        if(n == 0)
            return 0;
        
        if(dp[amount][n] != -1)
            return dp[amount][n];
        
        if(coins[n - 1] <= amount) {
            
            int include = solve(coins, amount - coins[n - 1], n);
            int exclude = solve(coins, amount, n - 1);
            
            return dp[amount][n] = include + exclude;
        }
        
        return dp[amount][n] = solve(coins, amount, n - 1);
    }
    
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        
        memset(dp, -1, sizeof(dp));
        
        int result = solve(coins, amount, n);
        
        return result;
        
    }
};