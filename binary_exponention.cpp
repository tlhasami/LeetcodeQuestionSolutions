#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long exp = n; // Use long long to avoid overflow for INT_MIN
    double ans = 1;
    if (exp < 0) {
        x = 1 / x;   // Handle negative exponent
        exp = -exp;  // Convert n to positive
    }
    double ans = 1 ;
    while(n>0){
        cout<<n<<endl;
        if(n&1){
            ans*=x;
        } 
        n>>=1;
        x*=x;
    }
    return ans;
}

int main() {
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    
    double result = myPow(x, n);
    cout << x << " raised to the power " << n << " is: " << result << endl;
    
    return 0;
}