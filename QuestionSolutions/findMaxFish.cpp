class Solution {
public:
    int count(vector<vector<int>>& grid , int r , int c){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0 ) 
            return 0;
        
        int area = grid[r][c];
        grid[r][c] = 0 ;
        int x[4] = {-1, 0, 1, 0};
        int y[4] = {0, 1, 0, -1};

        for(int i = 0 ; i < 4 ;i++){
            area += count(grid,r+x[i],c+y[i]);
        }
        return area;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size() ;
        int maxFish = 0;
        for(int r = 0 ;r < m ; r++){
            for(int c = 0 ; c<n ; c++ ){
                if(grid[r][c] > 0){
                    maxFish = max(maxFish , count(grid,r,c));
                }
            }
        }

        return maxFish;
        
    }
};
