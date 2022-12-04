class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int balance = 0, deficit = 0, start = 0;
        
        int n = gas.size();
        
        for(int i = 0; i < n; i++) {
            
            balance = balance + (gas[i] - cost[i]);
            
            if(balance < 0) {
                
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }
        
        return ((balance + deficit) >= 0 ? start : -1);
    }
};