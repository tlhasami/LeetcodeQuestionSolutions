#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i = 0, j = 0, n = nums1.size(), m = nums2.size();
        vector<vector<int>> ans;
        while (i < n || j < m) {
            if (i < n && j < m && nums1[i][0] == nums2[j][0]) {
                ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            } else if (i < n && (j >= m || nums1[i][0] < nums2[j][0])) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> nums1 = {{1, 2}, {3, 4}, {5, 6}};
    vector<vector<int>> nums2 = {{1, 3}, {4, 5}, {6, 7}};
    vector<vector<int>> result = solution.mergeArrays(nums1, nums2);

    for (const auto& pair : result) {
        cout << "{" << pair[0] << ", " << pair[1] << "} ";
    }
    cout << endl;

    return 0;
}