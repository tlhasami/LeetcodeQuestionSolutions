#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> n = digits;
        if(n[digits.size() - 1] < 9) {
            n[digits.size() - 1]++;
            return n;
        } 
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(n[i] >= 9) {
                n[i] = 0;
            } else {
                n[i]++;
                return n;
            }
        }
        n.insert(n.begin(), 1);
        return n;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {1, 9, 9};
    vector<int> result = sol.plusOne(digits);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}