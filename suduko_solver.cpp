#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool checker(vector<vector<char>> &board, int i, int j, char val)
    {
        // column
        for (int k = 0; k < 9; k++)
        {
            if (i != k && val == board[k][j])
                return false;
        }
        // row
        for (int k = 0; k < 9; k++)
        {
            if (j != k && val == board[i][k])
                return false;
        }
        // box
        int row = (i / 3) * 3;
        int col = (j / 3) * 3;
        for (int n = row; n < row + 3; n++)
        {
            for (int m = col; m < col + 3; m++)
            {
                if (board[n][m] == val && n != i && m != j)
                    return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.') {

                    for (char c = '1'; c <= '9'; c++)
                    {
                        if (checker(board, i, j, c))
                        {
                            board[i][j] = c;
                            if(solve(board))
                                return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;    
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        if(solve(board))
        cout<<"Solved"<<endl;
    }

    void printBoard(const vector<vector<char>> &board)
    {
        for (const auto &row : board)
        {
            for (const auto &cell : row)
            {
                cout << cell << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution solver;
    solver.solveSudoku(board);
    solver.printBoard(board);

    return 0;
}