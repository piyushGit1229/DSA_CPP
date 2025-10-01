#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int balance = 0;
        for (char c : s) {
            if (c == '[') {
                st.push(c);
            } else if (!st.empty()) {
                st.pop();
            }
        }
        return (st.size() + 1) / 2;
    }
};

int main(){

return 0;
}