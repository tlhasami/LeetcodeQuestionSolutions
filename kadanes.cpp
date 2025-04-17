#include<iostream>
#include<algorithm>
using namespace std;

int main (){
    int arr[]={-1,2,-6,5,4,-7,9};
    int maximum = 0 ,prev = arr[0];

    for (int i = 1; i < 7; i++)
    { 
        prev+=arr[i];
        maximum = max(maximum,prev);
        if(prev<0) prev =0 ;
        cout<<"Current sum :"<<prev<<endl;
    }
    cout<<maximum<<endl;
    return 0;
}