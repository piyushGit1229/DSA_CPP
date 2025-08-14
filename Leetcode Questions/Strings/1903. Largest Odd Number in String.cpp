#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {
    Solution sol;
    string num;

    cout << "Enter a number: ";
    cin >> num;

    string result = sol.largestOddNumber(num);
    cout << "Largest odd number substring: \"" << result << "\"" << endl;

    return 0;
}
