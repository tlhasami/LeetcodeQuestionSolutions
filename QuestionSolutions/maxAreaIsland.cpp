class Solution {
    int count(vector<vector<int>>& grid, int row, int col) {
        int n = grid.size(), m = grid[0].size();
        if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == 0)
            return 0;

        grid[row][col] = 0;  
        int area = 1;

        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};

        for (int k = 0; k < 4; k++) {
            area += count(grid, row + dx[k], col + dy[k]);
        }
        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    maxArea = max(maxArea, count(grid, i, j));
                }
            }
        }
        return maxArea;
    }
};
