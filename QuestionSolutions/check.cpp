#include<iostream>
using namespace std;

int binarySearch(int arr[] , int s , int e , int x){
   if(s>e) return -1;
   int m = s + (e-s)/2;

   if(arr[m]==x) return m;
   else if (arr[m]>x) return binarySearch(arr, s, m - 1 , x);
   else  return binarySearch(arr, m +1,e , x);
}
int main (){
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}