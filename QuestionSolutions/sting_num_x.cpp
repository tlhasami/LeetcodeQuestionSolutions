#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string multiplyStrings(const std::string &num1, const std::string &num2) {
    int n = num1.size();
    int m = num2.size();
    std::vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i+j+1];
            result[i+j]+=sum/10;
            result[i+j+1]=sum%10;
        }
    }

    std::string product;
    for (int num : result) {
        if (!(product.empty() && num == 0)) {
            product.push_back(num + '0');
        }
    }

    return product.empty() ? "0" : product;
}

int main() {
    std::string num1 = "123";
    std::string num2 = "456";
    std::cout << "Product: " << multiplyStrings(num1, num2) << std::endl;
    return 0;
}