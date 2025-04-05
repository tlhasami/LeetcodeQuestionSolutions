class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();

        if (n < 2)
            return 0;

        int gap = 0;

        for (int i = 0; i < n - 1; i++) {
            gap = max(gap, nums[i + 1] - nums[i]);
        }

        return gap;
    }
};
