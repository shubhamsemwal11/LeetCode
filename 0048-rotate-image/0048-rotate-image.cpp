class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0, end = col - 1;
        
        for(int i = 0; i < row; i++) {
            
            for(int j = i; j < col; j++)
                swap(matrix[i][j],  matrix[j][i]);
        }
        
        while(start < end) {
            
            for(int i = 0; i < row; i++)
                swap(matrix[i][start], matrix[i][end]);
            
            start++;
            end--;
        }
    }
};