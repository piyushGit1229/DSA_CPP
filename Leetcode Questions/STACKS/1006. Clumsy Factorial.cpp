#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int clumsy(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        char ops[] = {'*', '/', '+', '-'};
        int op_idx = 0;
        stack<int> st;
        st.push(n);
        for (int i = n - 1; i >= 1; i--) {
            char op = ops[op_idx % 4];

            if (op == '*') {
                int top = st.top();
                st.pop();
                st.push(top * i);
            } else if (op == '/') {
                int top = st.top();
                st.pop();
                st.push(top / i);
            } else if (op == '+') {
                st.push(i);
            } else if (op == '-') {
                st.push(-i);
            }
            op_idx++;
        }
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};


int main(){

return 0;
}
