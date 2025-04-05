class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> elements;

        // Flatten the matrix
        for (const auto& row : matrix) {
            for (int num : row) {
                elements.push_back(num);
            }
        }

        sort(elements.begin(), elements.end()); // Sort the flattened elements

        return elements[k - 1]; // 1-based to 0-based index
    }
};
