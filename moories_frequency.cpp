#include<iostream>
#include<vector>

using namespace std;

int moories(vector<int>&nums){
    int freq = 1 , candidate = nums[0];
    for(int i = 0 ; i < nums.size(); i++){
        if(freq==0)
            candidate = nums[i] , freq = 1;
        
        if(candidate==nums[i])
            freq++;
        else 
            freq--;
    }
    return candidate;
}

int main (){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = moories(nums);
    cout << "The majority element is: " << result << endl;

    return 0;
}