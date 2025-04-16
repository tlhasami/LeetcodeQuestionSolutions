class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int maxi = 1, c = 1;
        int prev = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (prev + 1 == nums[i]) {
                c++;
            } else {
                maxi = max(maxi, c);
                c = 1;
            }
            prev = nums[i];
        }

        return max(maxi, c);
    }
};
