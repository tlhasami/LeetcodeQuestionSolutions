class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>moves = {a,b,c};

        sort(moves.begin() , moves.end());

        if( moves[0] + 1 == moves[1] && moves[1] + 1 == moves[2] )
            return {0,0};

        vector<int>ans = {0,0};

        ans[1] = moves[2] - moves[1] - 1 + moves[1] - moves[0] - 1;

        if ( moves[0] + 1 == moves[1] || moves[1] + 1 == moves[2] || (moves[0] + 2 == moves[1] || moves[1] + 2 == moves[2] ))
            ans[0] = 1;
        else 
            ans[0] = 2 ;
            
        return ans;
    }
};
