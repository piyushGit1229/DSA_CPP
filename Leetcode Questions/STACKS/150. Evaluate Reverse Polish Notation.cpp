#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto& c : tokens) {
            if (c == "+") {
                int topmost = st.top();
                st.pop();
                int result = st.top() + topmost;
                st.pop();
                st.push(result);
            } else if (c == "*") {
                int topmost = st.top();
                st.pop();
                int result2 = st.top() * topmost;
                st.pop();
                st.push(result2);
            } else if (c == "/") {
                int topmost = st.top();
                st.pop();
                int result3 = st.top() / topmost;
                st.pop();
                st.push(result3);
            } else if (c == "-") {
                int topmost = st.top();
                st.pop();
                int result4 = st.top() - topmost;
                st.pop();
                st.push(result4);
            } else {
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};

int main(){

return 0;
}