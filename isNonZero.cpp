class Solution {
public:
    bool isNonZero(int n){
        while(n>0){
            if(n%10==0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        int a=1;
        int b=n-1;

        while(true){
            if(isNonZero(a) && isNonZero(b)){
                ans.push_back(a);
                ans.push_back(b);
                return ans;
            }else{
                a++;
                b--;
            }
        }
    }
};
