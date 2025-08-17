// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.

#include <iostream>
using namespace std;
bool ispalindrome(int i, int j, string s)
{
    while (i < j)
    {
        if (s[i++] != s[j--])
        {
            return false;
        }
        return true;
    }
}

bool validpalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return ispalindrome(i + 1, j, s) || ispalindrome(i, j - 1, s);
        }
    }
    return true;
}
int main()
{
     string s1 = "aba";
    string s2 = "abca";

    cout << s1 << " -> " << (validpalindrome(s1) ? "true" : "false") << endl;
    cout << s2 << " -> " << (validpalindrome(s2) ? "true" : "false") << endl;

    return 0;
    

    return 0;
}