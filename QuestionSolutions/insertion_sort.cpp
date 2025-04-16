#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    // Your insertion sort code will go here
    for(int i = 1 ;i < arr.size() ; i++){
        int current = arr[i];
        int prev = i - 1 ;
        while (prev >= 0 && current<arr[prev]){
            arr[prev+1] = arr[prev];
            prev--;     
        }
        arr[prev+1] = current;
    }
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6};
    
    std::cout << "Original array: ";
    printArray(arr);
    
    insertionSort(arr);
    
    std::cout << "Sorted array: ";
    printArray(arr);
    
    return 0;
}