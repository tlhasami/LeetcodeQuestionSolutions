#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int row, int col) {
        int n = grid1.size(), m = grid1[0].size();
        

        if (row < 0 || row >= n || col < 0 || col >= m || grid2[row][col] == 0)
            return true;
        
        grid2[row][col] = 0;
        
        bool isSubIsland = (grid1[row][col] == 1);
        
        
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        for (int k = 0; k < 4; k++) {
            isSubIsland &= dfs(grid1, grid2, row + dx[k], col + dy[k]);
        }
        
        return isSubIsland;
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size(), n = grid1[0].size(), ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 1) {  
                    if (dfs(grid1, grid2, i, j)) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};
