#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num); // convert to string    "1234"
        vector<int> evens;
        vector<int> odds;
        for (char c : s) {
            int digit = c - '0';
            if (digit % 2 == 0) { // even digit
                evens.push_back(digit);
            } else {
                odds.push_back(digit);
            }
        }

        // sort in descending
        sort(odds.rbegin(), odds.rend());   // 3 1
        sort(evens.rbegin(), evens.rend()); // 4 2
        // required ans is 3 4 1 2

        int even_idx = 0;
        int odd_idx = 0;
        string result = "";

        for (char c : s) {
            int digit = c - '0';
            if (digit % 2 == 0) {
                result += to_string(evens[even_idx++]);
            } else {
                result += to_string(odds[odd_idx++]);
            }
        }
        return stoi(result);
       
    }
};
int main(){

return 0;
}