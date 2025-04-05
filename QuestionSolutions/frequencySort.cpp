class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Step 1: Count frequencies
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Sort the string using custom comparator
        sort(s.begin(), s.end(), [&](char a, char b) {
            return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);
        });

        return s;
    }
};
