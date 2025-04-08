class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {

        unordered_map < double , long long > ratio_count ;
        long long count = 0 ;
        int n = rectangles.size() ;
        for (int i = 0 ; i < n ; i++){
            ratio_count[ double(rectangles[i][0]) / rectangles[i][1] ] += 1 ;
        }

        for (const auto & [key,val] : ratio_count){
            count += ( val * (val - 1) / 2 );
        }
        
        return count ;
    }
};
