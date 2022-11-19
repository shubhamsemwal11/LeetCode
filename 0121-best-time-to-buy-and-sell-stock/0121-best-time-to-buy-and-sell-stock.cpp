class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minSoFar = INT_MAX;
        int diff;
        int profit = 0;
        
        for(int i: prices) {
            
            diff = i - minSoFar;
            profit = max(profit, diff);
            minSoFar = min(minSoFar, i);
        }
        
        return profit;
    }
};