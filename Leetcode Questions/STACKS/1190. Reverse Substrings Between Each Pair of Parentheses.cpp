#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string result = "";

        for (char c : s) {
            string temp = "";
            if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    temp = temp + st.top();
                    st.pop();
                }
                st.pop();

                for (char x : temp) {
                    st.push(x);
                }
            } else {
                st.push(c);
            }
        }
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main(){

return 0;
}