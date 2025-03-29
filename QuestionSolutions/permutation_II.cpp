#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void helper(vector<int>& nums, int idx, int end, vector<vector<int>>& ans) {
        if (idx == end) {
            ans.push_back(nums);
            return;
        }

        for (int i = idx; i <= end; i++) {
            if (i != idx && nums[i] == nums[idx]) continue;
            swap(nums[i], nums[idx]);
            helper(nums, idx + 1, end, ans);
            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        helper(nums, 0, nums.size() - 1, ans);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2 , 2 , 1 , 1 };
    vector<vector<int>> result = solution.permuteUnique(nums);

    for (const auto& permutation : result) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}