#include<bits/stdc++.h>
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }
        int i = 0;
        int j = 1;
        int result = 0;

        while (j < colors.size()) {
            if (colors[j] == colors[j - 1]) {
                i = j;
                j++;
                continue;
            }
            if (j - i + 1 == k) {
                result++;
                i++;
            }
            j++;
        }
        return result;
    }
};
using namespace std;
int main(){

return 0;
}