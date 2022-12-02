class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        vector<int> mp1(26, 0);
        vector<int> mp2(26, 0);
        
        if(word1.size() != word2.size())
            return false;
        
        for(char ch: word1)
            mp1[ch - 'a']++;
        
        for(char ch: word2) {
            
            if(mp1[ch - 'a'] == 0)
                return false;
            
            mp2[ch - 'a']++;
        }
        
        sort(mp1.begin(), mp1.end());
        sort(mp2.begin(), mp2.end());
        
        return (mp1 == mp2);
    }
};