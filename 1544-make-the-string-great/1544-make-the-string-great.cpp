class Solution {
public:
    string makeGood(string s) {
        
        int n = s.size();
        stack<char> st;
        string result = "";
        
        for(int i = 0; i < n; i++) {
            
            if(st.empty())
                st.push(s[i]);
            
            else {
                
                if(islower(s[i])) {
                    
                    if(isupper(st.top()) && (tolower(st.top()) == s[i]))
                        st.pop();
                    
                    else
                        st.push(s[i]);
                }
                
                else {
                    
                    if(islower(st.top()) && (toupper(st.top()) == s[i]))
                        st.pop();
                    
                    else
                        st.push(s[i]);
                }
            }
        }
        
        while(!st.empty()) {
            
            result = st.top() + result;
            st.pop();
        }
        
        return result;
    }
};