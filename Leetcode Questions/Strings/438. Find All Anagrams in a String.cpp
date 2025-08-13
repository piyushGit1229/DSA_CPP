#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.size();
        int n2 = p.size();

        vector<int> result;
        if (n1 < n2) return result;

        unordered_map<char, int> patternFreq;
        unordered_map<char, int> windowFreq;

        // Build frequency map for pattern string
        for (char c : p) {
            patternFreq[c]++;
        }

        int left = 0;
        for (int right = 0; right < n1; right++) {
            // Add current char to window
            windowFreq[s[right]]++;

            // Keep window size equal to n2
            if (right >= n2) {
                if (--windowFreq[s[left]] == 0) {
                    windowFreq.erase(s[left]);
                }
                left++;
            }

            // If window matches pattern, store starting index
            if (windowFreq == patternFreq) {
                result.push_back(left);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans = sol.findAnagrams(s, p);

    cout << "Anagram indices: ";
    for (int idx : ans) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
