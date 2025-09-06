#include<bits/stdc++.h>
using namespace std;
//Approach 1 : lengthy
class Solution {
public:
    bool isVowel(char c) {
        char ch = tolower(c);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    // int countvowels(string s) {
    //     vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    //     int count = 0;
    //     for (int i = 0; i < s.size(); i++) {
    //         char ch = tolower(s[i]);
    //         if (find(vowels.begin(), vowels.end(), ch) != vowels.end()) {
    //             count++;
    //         }
    //     }
    //     return count;
    // }

    bool halvesAreAlike(string s) {
        //     int n = s.size();
        //     int mid = n / 2;
        //     string lefthalf = s.substr(0, mid);
        //     string righthalf = s.substr(mid);
        //     int countleft = countvowels(lefthalf);
        //     int countright = countvowels(righthalf);
        //     return countleft == countright;

        // Approach 2 : TWOpointers

        int n = s.size();
        int mid = n / 2;
        int i = 0;
        int j = mid;
        int countleft = 0;
        int countright = 0;

        while (i < n / 2 && j < n) {
            if (isVowel(s[i])) {
                countleft++;
            }
            if (isVowel(s[j])) {
                countright++;
            }

            i++;
            j++;
        }

        return countleft == countright;
    }
};

int main(){

return 0;
}