#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for (int x : asteroids) {
            bool destroyed = false;
            while (!st.empty() && st.top() > 0 && x < 0) {
                if (abs(st.top()) == abs(x)) {
                    st.pop();
                    destroyed = true;
                    break;
                } else if (abs(st.top()) > abs(x)) {
                    destroyed = true;
                    break;
                } else {
                    st.pop();
                }
            }
            if (!destroyed)
                st.push(x);
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};

int main(){

return 0;
}
