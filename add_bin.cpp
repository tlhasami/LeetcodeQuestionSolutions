#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int m = (a.length() < b.length())? b.length() : a.length() ;
        string ans = "";
        int carry = 0 ;
        int sum ;
        for(int i = m - 1; i >= 0; i--){
            int a_bit = (i < a.length()) ? a[a.length() - 1 - i] - '0' : 0;  // Handle shorter length
            int b_bit = (i < b.length()) ? b[b.length() - 1 - i] - '0' : 0;
            sum = a_bit + b_bit + carry;
            carry = 0;
            if (sum == 1){
                ans = '1' + ans;
            } else if (sum == 2){
                ans = '0' + ans;
                carry = 1 ; 
            } else  if (sum == 3){
                ans = '1' + ans;
                carry = 1 ;  
            }
            else{
                ans = '0' + ans;
            }
            
        }
        return (carry)? ans = '1' + ans : ans ;
    }
};
int main() {
    Solution sol;
    string a = "1010";
    string b = "1011";
    cout << "Result: " << sol.addBinary(a, b) << endl;
    return 0;
}