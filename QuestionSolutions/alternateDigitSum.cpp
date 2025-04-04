class Solution {
public:
    int alternateDigitSum(int n) {

        int sum = 0 ;

        string s = to_string(n) ;
        bool even = (s.length() % 2) ? true : false ;

        while(n>0){
            if(even) sum+=(n%10);
            else sum-=(n%10);

            even = (even)? false:true;

            n /= 10 ;
        }

        return sum;
        
    }
};
