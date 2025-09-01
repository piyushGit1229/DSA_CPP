// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:

// Input: sentence = "leetcode"
// Output: false
 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>seen(sentence.begin(),sentence.end());
        if(seen.size()!=26){
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){
Solution sol;
sol.checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
return 0;
}