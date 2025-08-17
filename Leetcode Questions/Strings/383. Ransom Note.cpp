#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Step 1: Count frequency of each character in ransomNote
        map<char, int> ransomFreq;
        for (int i = 0; i < ransomNote.size(); i++) {
            ransomFreq[ransomNote[i]]++;
        }

        // Step 2: Count frequency of each character in magazine
        map<char, int> magazineFreq;
        for (int i = 0; i < magazine.size(); i++) {
            magazineFreq[magazine[i]]++;
        }

        // Step 3: Check if ransomNote can be formed
        for (auto it : ransomFreq) {
            char ch = it.first;        // character we are checking
            int needed = it.second;    // how many times ransomNote needs it

            // If magazine doesn't have enough of this character → return false
            if (magazineFreq[ch] < needed) {
                return false;
            }
        }

        // If all characters are available → return true
        return true;
    }
};

// Example usage
int main() {
    Solution sol;
    string ransomNote = "aab";
    string magazine = "baa";

    if (sol.canConstruct(ransomNote, magazine)) {
        cout << "Yes, ransomNote can be constructed!" << endl;
    } else {
        cout << "No, ransomNote cannot be constructed!" << endl;
    }

    return 0;
}
