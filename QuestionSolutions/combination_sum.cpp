#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    set<vector<int>> help;

    void helper(vector<int>& candidates, int target, int idx, vector<int>& arr, vector<vector<int>>& ans) {
        if (target == 0) {
            if (help.find(arr) == help.end()) {
                ans.push_back(arr);
                help.insert(arr);
            }
            return;
        }

        if (idx == candidates.size() || target < 0) {
            return;
        }

        arr.push_back(candidates[idx]);
        helper(candidates, target - candidates[idx], idx, arr, ans);
        arr.pop_back();
        helper(candidates, target, idx + 1, arr, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        helper(candidates, target, 0, arr, ans);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = sol.combinationSum(candidates, target);

    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}