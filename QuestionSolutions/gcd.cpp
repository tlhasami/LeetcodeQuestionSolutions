#include<iostream>
using namespace std;
int mood(int num1,int num2){
    while(num2!=0){
        int temp=num1%num2;
        cout<<num1<<" % "<<num2<<" = "<<temp<<endl;
        num1=num2;
        num2=temp;
        if(temp==0){
            cout<<"HCF : ";
            return num1;
        }
    }
    return -1;
}

int main (){

    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"GCD : \n"<< mood(num1,num2)<<" (by %) "<<endl;
    return 0;
}