#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool stop = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '|')
                stop = !stop;

            if (!stop) {
                count += (s[i] == '*') ? 1 : 0;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    string input = "l|*e*et|c**o|*de|";
    int result = solution.countAsterisks(input);
    cout << "Number of asterisks: " << result << endl;
    return 0;
}