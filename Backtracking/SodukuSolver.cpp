class Solution {
public:
    bool isValid(vector<vector<char>>& board,int i,int j,char& ch)
    {
        for(int col = 0; col<9; col++) {
            if(board[i][col] == ch) return false;
        }
        
        //validate current column
        for(int row = 0; row<9; row++) {
            if(board[row][j] == ch) return false;
        }
         int start_i = i/3 * 3;
        int start_j = j/3 * 3;
        for(int k = 0; k<3; k++) {
            for(int l = 0; l<3; l++) {
                if(board[start_i + k][start_j + l] == ch) return false;
            }
        }
        return true;
        
    }
    bool solve(vector<vector<char>>& board,int i,int j)
    {
         if(i == 9)
            return true;
        
        //current row over, go to next row starting from 0th column
        if(j == 9)
            return solve(board, i+1, 0);
        
        //if it's filled go for next column
        if(board[i][j] != '.')
            return solve(board, i, j+1);
        if(board[i][j]!='.')
            return solve(board,i,j+1);
            for(char ch = '1'; ch<='9'; ch++) {
            if(isValid(board, i, j, ch)) {
                board[i][j] = ch;
                if(solve(board, i, j+1)) {
                    return true;
                }
                board[i][j] = '.';
            }
        }
        
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
       solve(board,0,0) ;
     
    }
};
