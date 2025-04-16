#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setz(vector<vector<int>>& matrix, int i, int j) {
        int m = matrix.size(), n = matrix[0].size();
        for (int k = 0; k < m; k++) {
            matrix[k][j] = 0;
        }
        for (int k = 0; k < n; k++) {
            matrix[i][k] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (temp[i][j] == 0) {
                    setz(matrix, i, j);
                }
            }
        }
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    solution.setZeroes(matrix);

    cout << "Matrix after setZeroes:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}