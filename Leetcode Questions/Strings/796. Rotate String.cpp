#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();

        // Step 0: Quick check for impossible cases
        if (n != goal.size()) return false; // different lengths cannot match
        if (s == goal) return true;         // already equal, 0 rotation needed

        // Step 1: Try rotating s left by 1 up to n times
        for (int i = 0; i < n; i++) {

            // -------------------------------
            // 3-step reverse trick to rotate left by 1
            // -------------------------------
            // 1. Reverse first 1 character (does nothing for single char)
            reverse(s.begin(), s.begin() + 1);

            // 2. Reverse the remaining n-1 characters
            reverse(s.begin() + 1, s.end());

            // 3. Reverse the whole string to complete rotation
            reverse(s.begin(), s.end());

            // Step 2: Check if rotated string matches goal
            if (s == goal) return true;

            // -------------------------------
            // Dry run for understanding:
            // Example s="abcde", goal="cdeab"
            // Iteration 0: s = "abcde" → rotate → "bcdea" → not goal
            // Iteration 1: s = "bcdea" → rotate → "cdeab" → matches goal ✅
            // -------------------------------
        }

        // Step 3: If no rotation matches goal
        return false;
    }
};

int main() {
    Solution sol;

    string s1 = "abcde", goal1 = "cdeab";
    string s2 = "abcde", goal2 = "abced";

    cout << sol.rotateString(s1, goal1) << endl; // Output: 1 (true)
    cout << sol.rotateString(s2, goal2) << endl; // Output: 0 (false)

    return 0;
}
