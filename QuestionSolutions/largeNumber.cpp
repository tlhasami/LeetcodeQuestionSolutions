#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool compare(string &x, string &y) {
        return x + y > y + x; 
    }

    string largestNumber(vector<int>& nums) {
        
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        
        sort(strNums.begin(), strNums.end(), compare);

        
        if (strNums[0] == "0") {
            return "0";
        }

        
        string result = "";
        for (const string& str : strNums) {
            result += str;
        }

        return result;
    }
};
