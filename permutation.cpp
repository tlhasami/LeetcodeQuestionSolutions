#include <iostream>
#include <vector>
#include <algorithm>


void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void permuteRecursive(std::vector<int>& nums, int l, int r) {
    if (l == r) {
        printVector(nums);
    } else {
        for (int i = l; i <= r; ++i) {
            std::swap(nums[l], nums[i]);
            permuteRecursive(nums, l + 1, r);
            std::swap(nums[l], nums[i]); // backtrack
        }
    }
}
/*
Dry Run:

Initial vector: [1, 2, 3]

First call to permuteRecursive(nums, 0, 2):
    - i = 0: swap(nums[0], nums[0]) -> [1, 2, 3]
        Second call to permuteRecursive(nums, 1, 2):
            - i = 1: swap(nums[1], nums[1]) -> [1, 2, 3]
                Third call to permuteRecursive(nums, 2, 2):
                    - print [1, 2, 3]
            - i = 2: swap(nums[1], nums[2]) -> [1, 3, 2]
                Third call to permuteRecursive(nums, 2, 2):
                    - print [1, 3, 2]
            - backtrack: swap(nums[1], nums[2]) -> [1, 2, 3]
    - i = 1: swap(nums[0], nums[1]) -> [2, 1, 3]
        Second call to permuteRecursive(nums, 1, 2):
            - i = 1: swap(nums[1], nums[1]) -> [2, 1, 3]
                Third call to permuteRecursive(nums, 2, 2):
                    - print [2, 1, 3]
            - i = 2: swap(nums[1], nums[2]) -> [2, 3, 1]
                Third call to permuteRecursive(nums, 2, 2):
                    - print [2, 3, 1]
            - backtrack: swap(nums[1], nums[2]) -> [2, 1, 3]
    - i = 2: swap(nums[0], nums[2]) -> [3, 2, 1]
        Second call to permuteRecursive(nums, 1, 2):
            - i = 1: swap(nums[1], nums[1]) -> [3, 2, 1]
                Third call to permuteRecursive(nums, 2, 2):
                    - print [3, 2, 1]
            - i = 2: swap(nums[1], nums[2]) -> [3, 1, 2]
                Third call to permuteRecursive(nums, 2, 2):
                    - print [3, 1, 2]
            - backtrack: swap(nums[1], nums[2]) -> [3, 2, 1]
    - backtrack: swap(nums[0], nums[2]) -> [1, 2, 3]

Final output:
1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2
*/

std::vector<int> printPermutations(std::vector<int>& nums) {
    permuteRecursive(nums, 0, nums.size() - 1);
    return nums;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    std::sort(nums.begin(), nums.end());
    printPermutations(nums);
    return 0;
}

