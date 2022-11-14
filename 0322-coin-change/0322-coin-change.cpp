class Solution {
public:
    /* int dp[10001][13];

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
    */
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        int dp[amount + 1][n + 1];
        
        memset(dp, -1, sizeof(dp));
        
        for(int i = 0; i < amount + 1; i++) {
            
            for(int j = 0; j < n + 1; j++) {
                
                if(i == 0)
                    dp[i][j] = 0;
                
                else if(j == 0)
                    dp[i][j] = INT_MAX - 1;
                
                else if(coins[j - 1] <= i) {
                    
                    int include = 1 + dp[i - coins[j - 1]][j];
                    int exclude = dp[i][j - 1];
                    
                    dp[i][j] = min(include, exclude);
                }
                
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
        
        /* int result = solve(coins, amount, n);
        
        if(result == INT_MAX - 1)
            return  - 1; */
        
        if(dp[amount][n] == INT_MAX - 1)
            return -1;
        
        return dp[amount][n];
    }
};