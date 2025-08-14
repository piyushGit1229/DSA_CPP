#include <iostream>
#include <string>
#include <algorithm> // for reverse
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        // step 1 : reverse the whole string .....the sky to yks eht
        reverse(s.begin(), s.end());
        // step 2 : take string until u find space
        for (int i = 0; i < n; i++) {
            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            //step 3: reverse the word now
            reverse(word.begin(), word.end());
            if(word.length()>0){
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};

int main() {
    Solution sol;
    string input = "the sky is blue";
    string output = sol.reverseWords(input);

    cout << "Original: \"" << input << "\"" << endl;
    cout << "Reversed: \"" << output << "\"" << endl;

    return 0;
}
