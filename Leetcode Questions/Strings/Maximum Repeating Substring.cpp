#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        // int n = sequence.size();
        // int m = word.size();
        // int count = 0;
        // int i = 0;

        // while (i + m <= sequence.size()) {
        //     if (sequence.substr(i, m) == word) {
        //         count++;
        //         sequence.erase(i, m);
        //     } else {
        //         i++;
        //     }
        // }
        // return count;

        int maxcount = 0;
        string repeated = word;
        while (sequence.find(repeated) != string::npos) {
            maxcount++;
            repeated += word;
        }
        return maxcount;
    }
};


int main(){

return 0;
}