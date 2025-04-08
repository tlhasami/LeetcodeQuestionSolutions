class Solution {
public:
    int countEven(int n) {
        int c = 0;
        vector<int>nums(n + 1, 0 ) ;
        for (int i = 1 ; i <= n ; i++){
            int temp = i ;
            while(temp > 0 ){
                nums[i] += temp%10;
                temp /= 10;
            }
            
            c += (nums[i] % 2 == 0) ? 1 : 0; 

        }
        return c ;
    }
};
