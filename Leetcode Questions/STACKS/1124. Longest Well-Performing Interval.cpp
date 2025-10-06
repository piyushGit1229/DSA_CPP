#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int maxlen = 0;
        int n = hours.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (hours[i] > 8) {
                result.push_back(1);
            } else {
                result.push_back(-1);
            }
        }
        // 1  1 -1 -1 -1 -1 -1
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum = sum + result[j];
                if (sum > 0) {
                    maxlen = max(maxlen, j - i + 1);
                }
            }
        }
        return maxlen;
    }
};

int main(){

return 0;
}