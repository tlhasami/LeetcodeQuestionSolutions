#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    // Function implementation will go here
    int pivot = -1, n = nums.size();
    for(int i = n -1 ; i > 0 ; i --){
        if(nums[i-1]<nums[i]){
            pivot = i - 1;
            break;
        }
    }
    if(pivot==-1){
        std::reverse(nums.begin(),nums.end());
        return;
    }
    for(int i = n - 1 ; i>pivot ; i--){
        if(nums[i]>nums[pivot]){
            std::swap(nums[i],nums[pivot]);
            break;
        }
    }
    std::reverse(nums.begin() +pivot+1,nums.end());
    return;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    
    nextPermutation(nums);
    
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}