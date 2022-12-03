class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> maxh;
        
        string result = "";
        
        for(char ch: s)
            mp[ch]++;
        
        for(auto x: mp)
            maxh.push({x.second, x.first});
        
        while(!maxh.empty()) {
            
            pair<int, char> top = maxh.top();
            maxh.pop();
            
            int freq = top.first;
            
            while(freq > 0) {
                
                result.push_back(top.second);
                freq--;
            }
        }
        
        return result;
    }
};