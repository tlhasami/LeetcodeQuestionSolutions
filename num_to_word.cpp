#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string till_99(int num) {
        string till_9[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        if (num < 10) {
            return till_9[num - 1];
        } else if (num == 10) {
            return "Ten";
        } else if (num > 10 && num < 100) {
            string till_19[9] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
            string tens[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
            if (num < 20) {
                return till_19[num - 11];
            } else {
                string result = tens[num / 10 - 2];
                if (num % 10 != 0) {
                    result += " " + till_9[num % 10 - 1];
                }
                return result;
            }
        }
        
    }

    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        if(num<100){
            return till_99(num);
        } else if (num<1000){
            string result = till_99(num/100) + " Hundred";
            if (num % 100 != 0) {
                result += " " + till_99(num % 100);
            }
            return result;
        } else if (num<1000000){
            string result = numberToWords(num/1000) + " Thousand";
            if (num % 1000 != 0) {
                result += " " + numberToWords(num % 1000);
            }
            return result;
        } else if (num<1000000000){
            string result = numberToWords(num/1000000) + " Million";
            if (num % 1000000 != 0) {
                result += " " + numberToWords(num % 1000000);
            }
            return result;
        } else if (num<1000000000000){
            string result = numberToWords(num/1000000000) + " Billion";
            if (num % 1000000000 != 0) {
                result += " " + numberToWords(num % 1000000000);
            }
            return result;
        }
        return "";
    }
};

int main() {
    Solution solution;
    int num = 421233; // Example number
    cout << solution.numberToWords(num) << endl;
    return 0;
}