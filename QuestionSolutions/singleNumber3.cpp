class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if (nums.size() == 2)
            return nums;

        unordered_map<int, int> val_count;

        for (int val : nums) {
            val_count[val] += 1;
        }
        vector<int> ans;
        for (const auto& [key, val] : val_count) {
            if (val == 1)
                ans.push_back(key);
        }

        return ans;
    }
};
