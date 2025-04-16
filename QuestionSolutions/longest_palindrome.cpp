#include <iostream>
using namespace std;

string expandAroundCenter(string &s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--,right++;
    }
    cout<<left+1<<" "<<right-left-1<<endl;
    cout<<s.substr(left + 1, right - left - 1)<<endl;
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.length() <= 1) return s;  
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        string odd = expandAroundCenter(s, i, i);
        string even = expandAroundCenter(s, i, i+1);
        if (odd.length() > ans.length()) ans = odd;
        if (even.length() > ans.length()) ans = even;
    }
    return ans;
}

int main() {
    string s = "adcd";
    cout << longestPalindrome(s) << endl;
    return 0;
}
