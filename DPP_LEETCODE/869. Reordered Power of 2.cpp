#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getstring(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s = getstring(n);
        for (int power = 0; power <= 29; power++) {
            if (s == getstring(pow(2, power))) {
                return true;
            }
        }
        return false;
    }
};
int main(){

return 0;
}

