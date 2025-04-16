#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        if (s[0] == ')' || s[0] == ']' || s[0] == '}')
            return false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                b.push(s[i]);
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (b.empty() || 
                    (s[i] == ')' && b.top() != '(') ||
                    (s[i] == ']' && b.top() != '[') ||
                    (s[i] == '}' && b.top() != '{')) {
                        cout<<s[i]<<" "<<b.top()<<endl;
                    return false;
                }
                b.pop();
            }
        }
        return b.empty();
    }
};

int main() {
    Solution solution;
    string test = "({[)]}";
    if (solution.isValid(test)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
    return 0;
}