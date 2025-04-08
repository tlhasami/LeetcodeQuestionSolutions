class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> val_count;

        for (int val : nums){
            int rev = 0 , temp = val ;
            while (temp > 0){
                rev = rev*10 + temp%10;
                temp /= 10 ; 
            }
            val_count [ val - rev ] += 1;
        }

        int counting = 0;
        const int MOD = 1e9 + 7;
        
        for (const auto& [val,count] : val_count){
             counting = (counting + 1LL * count * (count - 1) / 2) % MOD;
        }

        return counting;

    }
};
