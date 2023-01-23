class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> check(n, 0);
        
        for(auto x: trust) {
            
            check[x[1] - 1]++;
            check[x[0] - 1]--;
        }
        
        for(int i = 0; i < n; i++) {
            
            if(check[i] == n - 1)
                return i + 1;
        }
        return -1;
        
    }
};