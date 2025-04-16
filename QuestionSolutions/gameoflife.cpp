#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int check(vector<vector<int>>& board, int row, int col) {
        int x[8] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
        int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
        int count = 0;
        int m = board.size(), n = board[0].size();

        for (int i = 0; i < 8; i++) {
            int cx = col + x[i];
            int cy = row + y[i];
            if (cy >= 0 && cy < m && cx >= 0 && cx < n) {
                if (board[cy][cx] == 1 || board[cy][cx] == -1)
                    count++;
            }
        }
        return count;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int liveNeighbors = check(board, i, j);
                cout<<i<<" "<<j<<endl;

                if (board[i][j] == 0 && liveNeighbors == 3) {
                    board[i][j] = 3; 
                    cout<<"Getting alive"<<endl;
                } else if (board[i][j] == 1) {
                    if (liveNeighbors < 2) {
                        board[i][j] = -1;
                        cout<<"is dead now under population"<<endl; 
                    } else if(liveNeighbors == 2 || liveNeighbors == 3 ){
                        board[i][j] = 1; 
                        cout<<"Stays alive"<<endl;
                    } else{
                        board[i][j] = -1;
                        cout<<"overt polution"<<endl;
                    }
                }
                
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 3)
                    board[i][j] = 1;
                else if (board[i][j] == -1)
                    board[i][j] = 0;
            }
        }
    }
};

int main() {
    vector<vector<int>> board = {
        {0, 1, 0},
        {0, 0, 1},
        {1, 1, 1},
        {0, 0, 0}
    };

    Solution sol;
    sol.gameOfLife(board);

    for (const auto& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}