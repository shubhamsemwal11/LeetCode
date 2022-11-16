class Solution {
public:
    
    void solve(string digits, int index, string mp[], string output, vector<string>& result)         {
        
        if(index == digits.size()) {
            
            result.push_back(output);
            return;
        }
        
        int number = digits[index] - '0';
        string value = mp[number];
        
        for(int i = 0; i < value.size(); i++) {
            
            output.push_back(value[i]);
            solve(digits, index + 1, mp, output, result);
            output.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> result;
        
        if(digits.size() == 0)
            return result;
        
        string mp[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output = "";
        
        solve(digits, 0, mp, output, result);
        
        return result;
    }
};