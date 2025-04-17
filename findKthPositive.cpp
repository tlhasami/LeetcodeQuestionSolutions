class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int count = 0  , idx = 0 , n = arr.size() , val = 1 ;

        while ( idx < n ) {
            if( val == arr[idx] ) idx++ , val++;
            else val++ , count++;

            if(count == k) return --val ;
        }

        return --val + k - count ;
        
    }
};
