#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) {
    // Your implementation will go here
    int left = 0  , right = height.size()-1,water = INT_MIN;
    while(left<right){
        if(water < (right - left) * min(height[left],height[right])){
            water = (right - left) * min(height[left],height[right]);
        }

        if(height[left]<height[right])
            left++;
        else
            right--;
    }
    return water;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // Example input
    cout << "Maximum water that can be contained: " << maxArea(height) << endl;
    return 0;
}