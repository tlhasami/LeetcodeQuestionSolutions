#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        string a;
        for(int i = nums.size() - 1; i >= 0; i--) {
            while(nums[i] != 0) {
                int temp = nums[i] % 10;
                nums[i] /= 10;
                a = char(temp + '0') + a;
            }
        }
        for(char val : a) {
            ans.push_back(val - '0');
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {123, 456, 789};
    vector<int> result = sol.separateDigits(nums);

    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}