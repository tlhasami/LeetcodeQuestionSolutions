class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        int n = nums.size() / 2;
        unordered_map<int,int>val_count;

        for (int val : nums){
            val_count[val] += 1;
        }
      
        for(const auto& [key , val] : val_count){
            if(val == n ) return key;
        }

        return -1;
        
    }
};
