#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0;
        int j = 0;
        int count=0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
                count++;
            }
            j++;
        }

        return count == s.size();
    }
};
int main(){

return 0;
}