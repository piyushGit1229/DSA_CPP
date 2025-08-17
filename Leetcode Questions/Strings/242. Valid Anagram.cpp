#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Using hashmap
        map<char,int> s1;
        for (int i = 0; i < s.length(); i++) {
            s1[s[i]]++; // store all characters of s in hashmap
        }

        map<char,int> t2;
        for (int i = 0; i < t.length(); i++) {
            t2[t[i]]++;
        }

        return s1 == t2;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << (sol.isAnagram(s1, t1) ? "True" : "False") << endl; // Expected: True

    string s2 = "rat";
    string t2 = "car";
    cout << (sol.isAnagram(s2, t2) ? "True" : "False") << endl; // Expected: False

    return 0;
}
