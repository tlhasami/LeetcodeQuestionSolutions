#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
int majorityElement(vector<int>& nums) {
    int index = 0;
    sort(nums.begin(),nums.end());
    int ans = 1 , prev = 1;
    for(int i = 0 ; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    for(int i = 0 ;i <nums.size()-1 ; i++){
        if(nums[i]!=nums[i+1]){
            ans = max(ans,prev);
            if(ans<prev){
                ans = prev;
                index = i+1;
            }
            prev = 1;
            
        }else{
            prev++;
        }
    }
    cout<<"\nANSWER"<<endl;
    ans = max(ans,prev);
    return nums[index];

}
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << solution.majorityElement(nums) << endl;
    return 0;
}