class Solution {
public:
    
    bool isPossible(vector<vector<char>>& board, string& word, int index, int i, int j, int       row, int col) {
        
        if(index == word.size())
            return true;
        
        if(i < 0 || i >= row || j < 0 || j >= col || board[i][j] == '*' || board[i][j] !=             word[index])
            return false;
        
        char value = board[i][j];
        board[i][j] = '*';
        
        index++;
        
        if(isPossible(board, word, index, i + 1, j, row, col) ||
           isPossible(board, word, index, i - 1, j, row, col) ||
           isPossible(board, word, index, i, j + 1, row, col) ||
           isPossible(board, word, index, i, j - 1, row, col))
            return true;
        
        board[i][j] = value;
        
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        for(int i = 0; i < row; i++) {
            
            for(int j = 0; j < col; j++) {
                
                if(isPossible(board, word, 0, i, j, row, col))
                    return true;
            }
        }
        
        return false;
    }
};