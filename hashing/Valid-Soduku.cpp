

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge-2021/615/week-3-august-15th-august-21st/3904/
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

-----------------------------------------------------------------------------------------------------
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.'){
                string srow="row"+to_string(board[i][j])+to_string(i);
                string scol="col"+to_string(board[i][j])+to_string(j);
                string sbox="box"+to_string(board[i][j])+to_string((i/3)*3+j/3);
                if(s.find(srow)!=s.end()||s.find(scol)!=s.end()||s.find(sbox)!=s.end())
                {
                    return false;
                }
                    else
                    {
                        s.insert(srow);
                        s.insert(scol);
                        s.insert(sbox);
                    }
                
                }
            }
           
        }
         return true;
    }
};
