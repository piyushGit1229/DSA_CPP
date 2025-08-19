#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // If needle is longer than haystack, it cannot be found
        if (haystack.length() < needle.length()) {
            return -1;
        }

        // Loop through haystack
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i; // Found needle at index i
            }
        }

        return -1; // Needle not found
    }
};

// Example usage
int main() {
    Solution solution;
    string haystack = "hello";
    string needle = "ll";

    int index = solution.strStr(haystack, needle);
    cout << "Needle found at index: " << index << endl;

    return 0;
}
