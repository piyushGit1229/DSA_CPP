#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string dir = "";

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (!dir.empty()) {
                    if (dir == "..") {
                        if (!st.empty())
                            st.pop();
                    } else if (dir != ".") {
                        st.push(dir);
                    }
                    dir = "";
                }
            } else {
                dir = dir + path[i];
            }
        }

        if (!dir.empty()) {
            if (dir == "..") {
                if (!st.empty())
                    st.pop();
            } else if (dir != ".") {
                st.push(dir);
            }
        }

        if (st.empty())
            return "/";

        string result = "";
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        return result;
    }
};

int main(){

return 0;
}