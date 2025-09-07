#include<bits/stdc++.h>
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int cnt = 0;
        colors.push_back(colors[0]);
        colors.push_back(colors[1]);

        for (int i = 0; i+2 < colors.size(); ++i) {
            if (colors[i] == colors[i+2] && colors[i] != colors[i + 1]) {
                cnt++;
            }
        }
        return cnt;
    }
};
using namespace std;
int main(){

return 0;
}