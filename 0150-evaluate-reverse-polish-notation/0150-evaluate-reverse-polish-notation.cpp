class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<long long> st;
        unordered_map<string, int> mp;
        
        mp["+"]++;
        mp["-"]++;
        mp["/"]++;
        mp["*"]++;
        
        for(string ch: tokens) {
            
            if(mp.find(ch) != mp.end()) {
                
                long long second = st.top();
                st.pop();
                long long first = st.top();
                st.pop();
                
                if(ch == "+")        
                    st.push(first + second);
            
                else if(ch == "-")
                    st.push(first - second);
                
                else if(ch == "/")
                    st.push(first / second);
                
                else
                    st.push(first * second);
            }
            
            else
                st.push(stoll(ch));
        }
        
        return st.top();
    }
};