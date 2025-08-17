#include <bits/stdc++.h>
using namespace std;

// Function to find the index of the first unique character
int firstUnique(string s) {
    unordered_map<char, int> mp;

    // Count frequency of each character
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] == 1) {
            return i;
        }
    }

    return -1; // No unique character found
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int index = firstUnique(s);
    if (index != -1) {
        cout << "The first unique character is '" << s[index] 
             << "' at index " << index << endl;
    } else {
        cout << "No unique character found in the string." << endl;
    }

    return 0;
}
