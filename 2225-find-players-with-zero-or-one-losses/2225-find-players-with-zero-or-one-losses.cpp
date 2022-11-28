class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int, pair<int, int>> mp;
        vector<vector<int>> result(2);
        
        for(auto match: matches) {
            
            mp[match[0]].first++;
            mp[match[1]].second++;
        }
        
        for(auto x: mp) {
            
            pair<int, int> pr = x.second;
            
            if(pr.second == 0)
                result[0].push_back(x.first);
            
            else if(pr.second == 1)
                result[1].push_back(x.first);
        }
        
        return result;
    }
};