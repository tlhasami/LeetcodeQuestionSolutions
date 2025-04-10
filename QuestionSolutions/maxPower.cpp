class Solution {
public:
    int maxPower(string s) {
        if (s.length() == 1 ) return 1;
        int ans = 0 , c = 1 ;
        char prev = s[0];
        for (int i = 1 ; i < s.length() ; i++){
            if (s[i] == prev)
                c++;
            else{
                ans = max(ans,c);
                c = 1;
                prev = s[i]; 
            }
        }
        return  max(ans,c);
    }
};
