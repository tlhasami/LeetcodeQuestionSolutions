#include <iostream>
#include <vector>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1) return s; // No zigzag needed for 1 row

    string rows[100] = {}; // Array to store rows (assuming max 100 rows)
    int currRow = 0;
    bool goingDown = false;

    for (int i = 0; i < s.length(); i++) {
        rows[currRow] += s[i]; // Place character in the current row

        // Change direction at the top and bottom
        if (currRow == 0 || currRow == numRows - 1) 
            goingDown = !goingDown;

        currRow += goingDown ? 1 : -1; // Move up or down
    }

    // Join all rows to form the final string
    string result = "";
    for (int i = 0; i < numRows; i++)
        result += rows[i];

    return result;
}

int main() {
    cout << convert("PAYPALISHIRING", 4) << endl; // Output: "PINALSIGYAHRPI"
    return 0;
}
