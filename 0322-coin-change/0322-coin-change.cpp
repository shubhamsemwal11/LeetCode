class Solution {
public:
    int dp[10001][13];
    
    int solve(vector<int>& coins, int amount, int n) {
        
        if(amount == 0)
            return 0;
        
        if(n == 0)
            return INT_MAX - 1;
        
        if(dp[amount][n] != - 1)
            return dp[amount][n];
        
        if(coins[n - 1] <= amount) {
            
            int include = 1 + solve(coins, amount - coins[n - 1], n);
            int exclude = solve(coins, amount, n - 1);
            
            return dp[amount][n] = min(include, exclude);
        }
        
        return solve(coins, amount, n - 1);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        memset(dp, -1, sizeof(dp));
        
        int result = solve(coins, amount, n);
        
        if(result == INT_MAX - 1)
            return  - 1;
        
        return result;
    }
};