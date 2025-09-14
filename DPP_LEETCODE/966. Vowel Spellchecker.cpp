#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isvowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string toLower(string s) {
        for (char& c : s) {
            c = tolower(c);
        }
        return s;
    }

    string deVowel(string s) {
        for (char& c : s) {
            if (isvowel(c)) {
                c = '*';
            }
        }
        return s;
    }

    vector<string> spellchecker(vector<string>& wordlist,
                                vector<string>& queries) {

        unordered_set<string> exact(wordlist.begin(), wordlist.end());
        unordered_map<string, string> casemap;
        unordered_map<string, string> vowelmap;

        for (string w : wordlist) {
            string lower = toLower(w);
            string devowel = deVowel(lower);

            if (!casemap.count(lower)) { // if key `lower` is not present
                casemap[lower] = w;
            }
            if (!vowelmap.count(devowel)) { // if key `lower` is not present
                vowelmap[devowel] = w;
            }
        }
        vector<string> result;
        for (string q : queries) {
            if (exact.count(q)) {
                result.push_back(q);
                continue;
            }
            string lower = toLower(q);
            string devowel = deVowel(lower);

            if (casemap.count(lower)) {
                result.push_back(casemap[lower]);
            } else if (vowelmap.count(devowel)) {
                result.push_back(vowelmap[devowel]);
            } else {
                result.push_back("");
            }
        }
        return result;
    }
};

int main(){

return 0;
}