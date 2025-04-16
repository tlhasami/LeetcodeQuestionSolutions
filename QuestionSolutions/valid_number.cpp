#include<cstring>
#include<string>

using namespace std;

class Solution {
    public:
        bool isNumber(string s) {
            bool e = false , point = false ;
            int n = s.length();
            if (n == 1) return isdigit(s[0]);
            for (int i = 0 ; i < n ; i++) {
                if (!isdigit(s[i])) {
                    if ( s[i] == '.' && !point){
                        point = true ;
                    } else if ( (s[i] == '+' || s[i] == '-') && ( i==0 || ( i > 0 && (s[i-1] == 'E' || s[i-1] == 'e') ) )){
                       continue;
                    } else if (s[i] == 'E' || s[i] == 'e' && (i != (n - 1))) {
                        e = true ;
    
                    } else {
                        return false;
                    }
                }
            }
    
            return true;
    
            
        }
    };