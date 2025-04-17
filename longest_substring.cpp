#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    // int lengthOfLongestSubstring(string s)
    // {
    //     return 7;
    // }
};

int lengthOfLongestSubstring(string s)
{
    int max = 0;
    if(s.length()==1||s.length()==0){
        return s.length();
    }
    for (int i = 0; i < s.length(); i++)
    {
        string seen = "";
        for (int j = i; j < s.length(); j++)
        {
            if (seen.find(s[j]) == string::npos)
            {
                seen += s[j];
            }
            else
            {
                cout << "in" << endl;
                if (max < seen.length())
                {
                    max = seen.length();
                    seen = seen.erase();
                    seen += s[j];
                }
                break;
            }
            if(max<seen.length()){
                max = seen.length();
            }
            cout << i << " " << seen << " max " << max << endl;
        }
        
    }
    cout << max << endl;
    return max;
}

int main()
{
    string s = "au";
    lengthOfLongestSubstring(s);

    return 0;
}