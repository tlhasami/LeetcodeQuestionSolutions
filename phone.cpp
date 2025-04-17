#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        // Implementation will go here
        string phone[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (digits.size() == 0)
            return {};
        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i] < '2' || digits[i] > '9')
                return {};
        }

        vector<string> result;
        result.push_back("");
        for (int i = 0; i < digits.size(); i++)
        {
            vector<string> temp;
            string chars = phone[digits[i] - '0'];
            for (int j = 0; j < chars.size(); j++)
            {
                for (int k = 0; k < result.size(); k++)
                {
                    cout << "result["<<k<<"]: " << result[k] << endl;
                    temp.push_back(result[k] + chars[j]);
                }
            }
            result.swap(temp);
        }
        return result;
        return {};
    }
};

int main()
{
    Solution solution;
    string digits = "2453";
    vector<string> result = solution.letterCombinations(digits);

    cout << "Letter combinations for digits " << digits << " are: ";
    for (const string &combination : result)
    {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}