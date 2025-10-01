#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        vector<int> result;

        for (auto& s : strs) {
            bool isDigit = true;
            for (char c : s) {
                if (!isdigit(c)) {
                    isDigit = false;
                    break;
                }
            }
            if (isDigit) {
                result.push_back(stoi(s));
            } else {
                result.push_back(s.size());
            }
        }

        return *max_element(result.begin(), result.end());
    }
};


int main(){

return 0;
}