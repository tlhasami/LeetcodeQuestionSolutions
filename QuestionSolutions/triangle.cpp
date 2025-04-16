#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int index = 0, total = 0;
        for (int i = triangle.size(); i >=0 ; i++) {
            for(int j = 0; j < triangle[i].size() -1; j++) {
                if (triangle[i][j] < triangle[i][j+1]) {
                    total += triangle[i][j];
                    index = j;
                } else {
                    total += triangle[i][j+1];
                    index = j+1;
                }
            }
            cout << "Total: " << total << endl;
            total+= triangle[i][index];
        }
        return total;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> triangle = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };
    cout << "Minimum total path: " << sol.minimumTotal(triangle) << endl;
    return 0;
}