
#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    cout << nums1.size() << " " << nums2.size();
    cout<<endl;
    cout<<"Elements of 1st vector : "<<endl;
    for(int i =0 ;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements of 2nd vector : "<<endl;
    for(int i =0 ;i <nums2.size();i++){
        cout<<nums2[i]<<" ";
    }
    int i = 0 ,j=0; 
    vector<int>mid; 
    while (i < nums1.size() && j < nums2.size()){
        if(nums1[i]<nums2[j]){
            mid.push_back(nums1[i]);
            
            i++;
        }else{
           mid.push_back(nums2[j]);
            j++; 
        }
    }
    while (i < nums1.size())
        mid.push_back(nums1[i++]);
        
    while (j < nums2.size())
        mid.push_back(nums2[j++]);

    cout<<endl<<i<<" "<<j;
    cout<<endl;
    for(int k = 0 ;k<mid.size();k++){
        cout<<mid[k]<<" ";
    }
    double median = (mid.size()%2)? mid[mid.size()/2]:0;
    if(mid.size()%2==0){
       median = (mid[mid.size()/2 - 1] + mid[mid.size()/2]) / 2.0;

    }
    return median;
    
}

int main()
{
    vector<int> n = {1, 3, 5, 7, 9}; 
    vector<int> m = {2, 4, 6, 8, 10}; 
    cout<<findMedianSortedArrays(n,m);
    return 0;
}
