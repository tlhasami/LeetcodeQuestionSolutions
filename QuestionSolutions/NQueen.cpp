#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;
    // Check this row on right side
    for (int i = col + 1; i < n; i++)
        if (board[row][i])
            return false;
    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(vector<vector<int>>& board, int col, int n) {
    if (col >= n)
        return true;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;

            if (solveNQUtil(board, col + 1, n))
                return true;

            board[i][col] = 0; // BACKTRACK
        }
    }

    return false;
}

void printSolution(vector<vector<int>>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << (board[i][j] ? " Q " : " . ");
        cout << endl;
    }
}

bool solveNQ(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));

    if (!solveNQUtil(board, 0, n)) {
        cout << "Solution does not exist";
        return false;
    }

    printSolution(board, n);
    return true;
}

int main() {
    int n = 8; // You can change the value of n to solve for different sizes
    solveNQ(n);
    return 0;
}