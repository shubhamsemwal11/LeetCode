class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        
        string temp;
        
        for(string s: strs) {
            
            temp = s;
            
            sort(s.begin(), s.end());
            mp[s].push_back(temp);
        }
        
        for(auto x: mp) {
            
            vector<string> group;
            
            for(string s: x.second)
                group.push_back(s);
            
            result.push_back(group);
        }
        
        return result;
    }
};