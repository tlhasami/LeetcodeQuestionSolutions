#include <iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double ans = x;
        for(int i = 2; i <= abs(n); i++) {
            ans *= x;
            cout<<ans<<endl;
        }
        if(n < 0) return 1.0 / ans;
        return ans;
    }
};

int main() {
    Solution solution;
    double x = 2.0;
    int n = -3;
    std::cout << "Power of " << x << " raised to " << n << " is: " << solution.myPow(x, n) << std::endl;
    return 0;
}
