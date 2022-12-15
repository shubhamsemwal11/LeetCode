class Solution {
public:
    
    int dp[1001][1001];
    
    int LCS(string& a, int m, string& b, int n) {
        
        if(m == 0 || n == 0)
            return 0;
        
        if(dp[m][n] != -1)
            return dp[m][n];
        
        if(a[m - 1] == b[n - 1])
            return dp[m][n] = 1 + LCS(a, m - 1, b, n - 1);
        
        return dp[m][n] = max(LCS(a, m - 1, b, n), LCS(a, m, b, n - 1));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.size(), n = text2.size();
        
        memset(dp, -1, sizeof(dp));
        
        int result = LCS(text1, m, text2, n);
        
        return result;
        
    }
};