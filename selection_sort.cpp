#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for(int i = 0 ;  i < n - 1 ; i ++){
        int smallestIndex = i;
        for(int j = i+1 ; j < n ; j ++) { 
            if(arr[j] < arr[smallestIndex])
                smallestIndex = j ; 
        }
        std::swap(arr[smallestIndex],arr[i]);
    }
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    std::cout << "Original array: ";
    printArray(arr);

    selectionSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}