#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size() ;
        char check = chars[0];
        int count = 1 ;
        string ans ;
        for(int i = 1 ; i<n ; i++ ){
            if(chars[i]==check){
                count++;
            } else {
                ans+=check;
                if(count!=1){
                    ans+=to_string(count);
                }
                check=chars[i];
                count=1;
            }
            cout<<i<<" "<<ans<<endl;
        } 
        ans+=check;
        if(count!=1){
            ans+=to_string(count);
        }
        int m = ans.length();
        chars.resize(m);
        for (int i = 0; i < m; i++) {
            chars[i] = ans[i];
        }
        return m;


        // if (chars.size() == 1) return 1;

        // vector<int> count(26, 0);

        // for (char val : chars) {
        //     count[val - 'a']++;
        // }

        // string ans;
        // for (int i = 0; i < 26; i++) {
        //     if (count[i] != 0) {
        //         ans += ('a' + i);
        //         if (count[i] != 1)
        //             ans += to_string(count[i]);
        //     }
        // }

        // int n = ans.length();
        // chars.resize(n);
        // for (int i = 0; i < n; i++) {
        //     chars[i] = ans[i];
        // }
        // return n;
    }
};

int main() {
    Solution solution;
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'a', 'a'};
    int newLength = solution.compress(chars);

    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed characters: ";
    for (char c : chars) {
        cout << c;
    }
    cout << endl;

    return 0;
}