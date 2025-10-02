#include<iostream>
using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if (n % 2 != 0) {
            return false;
        }
        int opencount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || locked[i] == '0') {
                opencount++;
            } else {
                opencount--;
            }
            if (opencount < 0) {
                return false;
            }
        }

        int closecount = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')' || locked[i] == '0') {
                closecount++;
            } else {
                closecount--;
            }
            if (closecount < 0) {
                return false;
            }
        }
        return true;
    }
};


int main(){

return 0;
}