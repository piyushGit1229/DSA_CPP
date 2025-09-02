#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for (char c : s)
            freq1[c - 'a']++;
        for (char c : t)
            freq2[c - 'a']++;

        int steps = 0;
        for (int i = 0; i < 26; i++) {
            steps += abs(freq1[i] - freq2[i]);
        }
        return steps;
    }
};
int main(){

return 0;
}