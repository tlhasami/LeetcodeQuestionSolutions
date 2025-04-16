#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(int f1[],int f2[]){
        for(int i=0;i<26;i++){
            if(f1[i]!=f2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(),m=s2.length();
        int freq[26] = {0};
        for (char val : s1) {
            freq[val - 'a']++;
        }

        for (int i = 0; i <= m - n; i++) {  // Ensure valid window size
            int freq_2[26] = {0};
            cout<<i<<" "<<i+m<<endl;
            for(int st = i ; st<i+n;st++){
                freq_2[s2[st] - 'a']++;
            }
            if(check(freq,freq_2)){
                
                return true;
            }
            for(int val:freq){
                cout<<val;
            }
            cout<<endl;
            for(int val:freq_2){
                cout<<val;
            }
            cout<<endl;
        }
        
       return false;
    }
};

int main() {
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << (sol.checkInclusion(s1, s2) ? "True" : "False") << endl;
    return 0;
}