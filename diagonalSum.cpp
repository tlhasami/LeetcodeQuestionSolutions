class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        if(mat.size() == 1) return mat[0][0];

        int sum = 0 , n = mat.size() ;

        for(int i = 0 , j = 0 ; j < n && i < n ; i++ , j++ )
            sum += mat[i][j] ;

        for(int i = 0 , j = n - 1 ; j >= 0 && i < n ; i++ , j-- )
            sum += mat[i][j] ;

        return (n % 2)?sum - mat[n/2][n/2] : sum  ;
    }
};
