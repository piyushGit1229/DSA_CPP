#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int priority(char c) {
        if (c == '^') return 3;
        if (c == '*' || c == '/') return 2;
        if (c == '+' || c == '-') return 1;
        return -1;
    } 
    
    string infixToPostfix(string& s) {
        stack<char> st;
        int i = 0;
        int n = s.size();
        string ans = "";

        while (i < n) {
            // If operand → add to result
            if ((s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z') || 
                (s[i] >= '0' && s[i] <= '9')) {
                ans += s[i];
            }

            // If '(' → push to stack
            else if (s[i] == '(') {
                st.push(s[i]);
            }

            // If ')' → pop until '('
            else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop(); // remove '('
            }

            // If operator → pop higher/equal precedence operators
            else {
                while (!st.empty() && 
                      (priority(s[i]) < priority(st.top()) || 
                      (priority(s[i]) == priority(st.top()) && s[i] != '^'))) {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }

            i++;
        }

        // Pop all remaining operators
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};


int main(){

return 0;
}