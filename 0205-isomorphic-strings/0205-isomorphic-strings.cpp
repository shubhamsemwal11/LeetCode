class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;
        
        int n = s.size();
        
        for(int i = 0; i < n; i++) {
            
            mps[s[i]] = i + 1;
            mpt[t[i]] = i + 1;
        }
        
        for(int i = 0; i < n; i++) {
            
            if(mps[s[i]] != mpt[t[i]])
                return false;
        }
        
        return true;
    }
};