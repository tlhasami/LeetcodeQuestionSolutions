class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        if (nums.size() <= 1)
            return nums;

        int n = nums.size();

        vector<int> left(n, 0);
        vector<int> right(n, 0);
        

        left[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i];
        }

        right[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i];
        }
        
        for (int i = 0 ; i < n ; i++) {
            int l = 1 , r = 1;

            if(i - 1 >= 0)
                l = left[i-1];
            if(i + 1 < n)
                r = right[i+1];
            
            nums[i] = r * l;
        }
        return nums;
    }
};
