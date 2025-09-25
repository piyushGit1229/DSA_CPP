#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for (char c : s) {
            if (c == '#') {
                if (!st1.empty())
                    st1.pop();
            } else {
                st1.push(c);
            }
        }

        for (char c2 : t) {
            if (c2 == '#') {
                if (!st2.empty())
                    st2.pop();
            } else {
                st2.push(c2);
            }
        }
        return st1 == st2;
    }
};

int main(){

return 0;
}