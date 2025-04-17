#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        // Implementation will go here
        auto it = find(nums.begin(), nums.end(), target);
        if(it==nums.end());

        
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = solution.searchRange(nums, target);

    cout << "Range: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}