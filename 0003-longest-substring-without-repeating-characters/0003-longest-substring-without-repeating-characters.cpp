class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int start = 0, result = 0;
        char ch;
        
        unordered_map<char, int> mp;
        
        for(int end = 0; end < n; end++) {
            
            ch = s[end];
            
            if(mp.find(ch) != mp.end())
                start = max(start, mp[ch] + 1);
            
            mp[ch] = end;
            result = max(result, end - start + 1);
        }
        
        return result;
    }
};