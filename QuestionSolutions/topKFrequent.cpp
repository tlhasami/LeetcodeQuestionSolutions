class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> hm;

        for (int num : nums) {
            hm[num]++;
        }

        vector<pair<int, int>> temp;
        for (auto& entry : hm) {
            temp.emplace_back(entry.second, entry.first);
        }

        sort(temp.begin(), temp.end());

        for (int i = temp.size()-1 ; k > 0 ; k--,i--) {
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};
