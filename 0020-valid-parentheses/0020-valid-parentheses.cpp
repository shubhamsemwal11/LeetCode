class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(char ch: s) {
            
            if(ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            
            else {
                
                if(ch == ')' && (st.empty() || st.top() != '('))
                    return false;
                
                else if(ch == '}' && (st.empty() || st.top() != '{'))
                    return false;
                
                else if(ch == ']' && (st.empty() || st.top() != '['))
                    return false;
                
                else
                    st.pop();
            }
        }
        
        return st.empty();
    }
};