class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> result(n);
        
        stack<int> st;
        st.push(n - 1);
        
        result[n - 1] = 0;
        
        for(int i = n - 2; i >= 0; i--) {
            
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
            
            if(st.empty())
                result[i] = 0;
            
            else
                result[i] = st.top() - i;
            
            st.push(i);
        }
        
        return result;
    }
};