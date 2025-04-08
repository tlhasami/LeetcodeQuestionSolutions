class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> val (nums.begin() , nums.end());
        vector<int>ans ;
        int n = nums.size() ;
        for (int i = 1 ; i <= n; i++ ) {
            if (val.find(i) == val.end()) {
                ans.push_back(i) ;
            }
        }
        return ans;
    }
};
