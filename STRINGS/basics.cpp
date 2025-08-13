#include <bits/stdc++.h>
using namespace std;

int main() {
    // ------------------------------
    // 1. STRING DECLARATION
    // ------------------------------
    string name = "piyush"; // Example string

    // ------------------------------
    // 2. SORTING THE STRING
    // ------------------------------
    // Sorts the string characters in ascending order
    sort(name.begin(), name.end());
    cout << "Sorted string: " << name << endl; // Output: hippsuy

    // ------------------------------
    // 3. REVERSING THE STRING
    // ------------------------------
    reverse(name.begin(), name.end());
    cout << "Reversed string: " << name << endl; // Output: yusppih

    // ------------------------------
    // 4. CONVERTING CASE
    // ------------------------------
    // To lowercase
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout << "Lowercase: " << name << endl; // Output: yusppih

    // To uppercase
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << "Uppercase: " << name << endl; // Output: YUSPPIH

    // ------------------------------
    // 5. LOOPING THROUGH STRING
    // ------------------------------
    cout << "Characters in the string: ";
    for (int i = 0; i < name.size(); i++) {
        cout << name[i] << " "; // Index-based loop
    }
    cout << endl;

    cout << "Characters using range-based loop: ";
    for (char c : name) {
        cout << c << " "; // Range-based loop
    }
    cout << endl;

    // ------------------------------
    // 6. FREQUENCY COUNT OF CHARACTERS
    // ------------------------------
    unordered_map<char, int> mp; // Map to store frequency
    for (char c : name) {
        mp[c]++; // Increment frequency
    }

    cout << "Frequency of each character:\n";
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    // ------------------------------
    // 7. FINDING FIRST UNIQUE CHARACTER
    // ------------------------------
    for (char c : name) {
        if (mp[c] == 1) {
            cout << "First unique character: " << c << endl;
            break;
        }
    }

    // ------------------------------
    // 8. SINGLE CHARACTER CASE TRANSFORMATION
    // ------------------------------
    char ch = 'a';
    ch = toupper(ch); // Convert single character to uppercase
    cout << "Uppercase of 'a': " << ch << endl; // Output: A

    ch = tolower(ch); // Convert single character to lowercase
    cout << "Lowercase of 'A': " << ch << endl; // Output: a

    // ------------------------------
    // 9. CHARACTER CHECK FUNCTIONS
    // ------------------------------
   char c = '1';

// Checks if the character is **alphanumeric** (either a letter or a digit)
cout << "Is '" << c << "' alphanumeric? " << (isalnum(c) ? "Yes" : "No") << endl;

// Checks if the character is an **alphabet letter** (A-Z or a-z)
cout << "Is '" << c << "' alphabet? " << (isalpha(c) ? "Yes" : "No") << endl;

// Checks if the character is a **digit** (0-9)
cout << "Is '" << c << "' digit? " << (isdigit(c) ? "Yes" : "No") << endl;

// Checks if the character is a **whitespace** character (space, tab, newline)
cout << "Is '" << c << "' space? " << (isspace(c) ? "Yes" : "No") << endl;

// Checks if the character is **uppercase** (A-Z)
cout << "Is '" << c << "' uppercase? " << (isupper(c) ? "Yes" : "No") << endl;

// Checks if the character is **lowercase** (a-z)
cout << "Is '" << c << "' lowercase? " << (islower(c) ? "Yes" : "No") << endl;

    return 0;
}
