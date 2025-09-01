// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.

// Note: The characters in the array beyond the returned length do not matter and should be ignored.

 

// Example 1:

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
// Example 2:

// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be: ["a"]
// Explanation: The only group is "a", which remains uncompressed since it's a single character.
// 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to compress the input array of characters
    int compress(vector<char>& chars) {
        int index = 0;   // Position to write compressed result
        int i = 0;       // Pointer to traverse input
        int n = chars.size();

        // Traverse the entire array
        while (i < n) {
            char curr = chars[i]; // Current character
            int count = 0;

            // Count how many times 'curr' appears consecutively
            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            // Write the current character at compressed index
            chars[index] = curr;
            index++;

            // If count > 1, append the count as characters
            if (count > 1) {
                string count_str = to_string(count);
                for (char &ch : count_str) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index; // Length of compressed array
    }
};

int main() {
    Solution sol;

    // Testcase 1
    vector<char> chars1 = {'a','a','b','b','c','c','c'};
    int len1 = sol.compress(chars1);

    cout << "Compressed length: " << len1 << "\nCompressed array: ";
    for (int i = 0; i < len1; i++) cout << chars1[i];
    cout << "\n\n";

    // Visualization:
    // Input:  a a b b c c c
    // Output: a2 b2 c3
    // Length: 6

    // Testcase 2
    vector<char> chars2 = {'a'};
    int len2 = sol.compress(chars2);

    cout << "Compressed length: " << len2 << "\nCompressed array: ";
    for (int i = 0; i < len2; i++) cout << chars2[i];
    cout << "\n\n";

    // Visualization:
    // Input:  a
    // Output: a
    // Length: 1

    // Testcase 3
    vector<char> chars3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    int len3 = sol.compress(chars3);

    cout << "Compressed length: " << len3 << "\nCompressed array: ";
    for (int i = 0; i < len3; i++) cout << chars3[i];
    cout << "\n\n";

    // Visualization:
    // Input:  a b b b b b b b b b b b b
    // Output: a b12
    // Length: 3

    return 0;
}
