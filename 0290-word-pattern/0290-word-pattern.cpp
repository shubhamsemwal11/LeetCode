class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> str;
        int n = s.size();
        string temp ="";
        
        unordered_map<char, string> mp;
        unordered_set<string> st;
        
        for(int i = 0; i < n; i++) {
            
            if(s[i] == ' ') {
                
                str.push_back(temp);
                temp = "";
            }
            
            else
                temp += s[i];
        }
        
        str.push_back(temp);
        
        if(str.size() != pattern.size())
            return false;
        
        for(int i = 0; i < pattern.size(); i++) {
            
            if(mp.find(pattern[i]) != mp.end()) {
                
                if(mp[pattern[i]] != str[i])
                    return false;
            }
            
            else {
                
                if(st.count(str[i]) > 0)
                    return false;
                
                mp[pattern[i]] = str[i];
                st.insert(str[i]);
            }
        }
        
        return true;
    }
};