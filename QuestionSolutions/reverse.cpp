#include <iostream>
using namespace std;
int reverse(int x)
{
    if (x < 10 && x > -1)
        return x;
    bool abso = false;
    if(x<0){
        cout<<"in"<<endl;
        abso=true;
        x=-1*x;
    }
    long int n = 0;
    while (x > 0)
    {
        long int temp = x % 10;
        n = 10 * n + temp;
        x /= 10;
        cout<<n<<endl;
    }
    if(abso){
        return -1 * n;
    }
    return n;
}

int main()
{
    cout<<reverse(-120);

    return 0;
}
