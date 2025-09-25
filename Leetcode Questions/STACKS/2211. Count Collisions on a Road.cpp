#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int count = 0;

        for (char c : directions) {
            while (!st.empty()) {
                if (st.top() == 'R' && c == 'L') {
                    count += 2;
                    st.pop();
                    c = 'S';
                } else if (st.top() == 'R' && c == 'S') {
                    count += 1;
                    st.pop();
                    c = 'S';
                } else if (st.top() == 'S' && c == 'L') {
                    count += 1;
                    c = 'S';
                    break;
                } else {
                    break;
                }
            }
            st.push(c);
        }

        return count;
    }
};

int main(){

return 0;
}