#include <iostream>
#include <vector>

void dutchNationalFlagSort(std::vector<int>& arr) {
    int n =arr.size();
    int low = 0 , mid = 0 , end = n-1;

    while(mid<end){
        if(arr[mid]==0){
            std::swap(arr[mid],arr[low]);
            low++;
            mid++;
        } else if(arr[mid]==1){
            mid++;
        } else {
            std::swap(arr[mid],arr[end]);   
            end--;
            mid++;
        }
    }
    
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {2, 0, 2, 1, 1, 0};
    std::cout << "Original array: ";
    printArray(arr);

    dutchNationalFlagSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}