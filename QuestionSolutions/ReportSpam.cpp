class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {

        set<string> set2(bannedWords.begin(), bannedWords.end());
        int count = 0;
        for (string word : message) {
            if (set2.contains(word)) {
                count++;
            }

            if (count == 2)
                return true;
        }
        return false;
    }
};
