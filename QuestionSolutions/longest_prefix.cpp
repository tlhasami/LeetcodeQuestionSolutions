#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty()) return "";
        string prefix = strs[0];
        for(int i = 1 ; i < strs.size() ; i++){ 
            while(strs[i].find(prefix) != 0 /*should start from starting index*/){
                prefix = prefix.substr(0,prefix.length()-1);
                if (prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};

int main()
{
    Solution S;
    vector<string> strs= {"",""};
    cout << S.longestCommonPrefix(strs);
    return 0;
}