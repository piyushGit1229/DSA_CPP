#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int open = 0;

        for (char c : s) {
            if (c == '(') {
                if (open > 0) result += c;  // skip outer '('
                open++;
            } else { // c == ')'
                open--;
                if (open > 0) result += c;  // skip outer ')'
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "(()())(())(()(()))";
    string output = sol.removeOuterParentheses(s);
    cout << "Output: " << output << endl; // Expected: "()()()()(())"
    return 0;
}
