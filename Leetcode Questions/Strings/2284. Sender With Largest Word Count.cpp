#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n = messages.size();

        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            string str = messages[i];
            int count = 0;
            for (int j = 0; j < str.size(); j++) {
                if (str[j] == ' ')
                    count = count + 1;
            }
            mp[senders[i]] += (count + 1);
        }
        
        int maxi = INT_MIN;
        string ans = "";
        for (auto it : mp) {
            if (it.second >= maxi) {
                maxi = it.second;
                if (it.first > ans) {
                    ans = it.first;
                }
            }
        }
        return ans;
    }
};
int main(){

return 0;
}