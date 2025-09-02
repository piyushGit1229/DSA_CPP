// Given a string word, return the sum of the number of vowels ('a', 'e', 'i', 'o', and 'u') in every substring of word.

// A substring is a contiguous (non-empty) sequence of characters within a string.


// Example 1:

// Input: word = "aba"
// Output: 6
// Explanation: 
// All possible substrings are: "a", "ab", "aba", "b", "ba", and "a".
// - "b" has 0 vowels in it
// - "a", "ab", "ba", and "a" have 1 vowel each
// - "aba" has 2 vowels in it
// Hence, the total sum of vowels = 0 + 1 + 1 + 1 + 1 + 2 = 6. 



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countVowels(string word) {
        long long n= word.length();
        long long count=0;
        for(long long i=0;i<n;i++){
            char c=word[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count += (i+1)*(n-i);
            }
        }
        return count;
    }
};
int main(){

return 0;
}