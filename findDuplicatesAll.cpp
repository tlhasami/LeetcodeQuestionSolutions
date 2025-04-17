class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector<int> ans;
        // set<int> check;
        // for(int val : nums){
        //     if(check.find(val) != check.end())
        //         ans.push_back(val);     
        //     else
        //         check.insert(val);     
        // }
        // return ans;

        vector<int> ans;

        unordered_map<int,int> val_count;

        for(int val : nums){
            val_count[val] += 1;
        }

        for(const auto& [key,val] : val_count){
            if(val > 1) ans.push_back(key);
        }
        return ans;
    }
};
