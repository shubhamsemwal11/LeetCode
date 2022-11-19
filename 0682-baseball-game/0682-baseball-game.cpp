class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> st;
        int result = 0;
        
        
        for(string s: operations) {
            
            if(s == "+") {
                
                int a = st.top();
                st.pop();
                
                int b = st.top();
                
                st.push(a);
            
                st.push(a + b);
            }
            
            else if(s == "D")
                st.push(2 * st.top());
            
            else if(s == "C")
                st.pop();
            
            else
                st.push(stoi(s));
        }
        
        while(!st.empty()) {
            
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};