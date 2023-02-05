class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result;
        
        int n = s.size();
        int window = p.size();
        
        if(n < window)
            return result;
        
        vector<int> count1(26, 0);
        vector<int> count2(26, 0);
        
        int i;
        
        for(i = 0; i < window; i++) {
            
            count1[s[i] - 'a']++;
            count2[p[i] - 'a']++;
        }
        
        if(count1 == count2)
            result.push_back(0);
        
        while(i < n) {
            
            int newChar = s[i] - 'a';
            count1[newChar]++;
            
            int oldChar = s[i - window] - 'a';
            count1[oldChar]--;
            
            if(count1 == count2)
                result.push_back(i - window + 1);
            
            i++;
        }
        
        return result;
        
    }
};