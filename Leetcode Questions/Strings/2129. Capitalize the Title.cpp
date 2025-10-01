#include<iostream>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        // lowercase the whole string
        for (int i = 0; i < n; i++) {
            title[i] = tolower(title[i]);
        }

        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && title[j] != ' ') {
                j++;
            }
            int wordlen = j - i;

            if (wordlen > 2) {
                title[i] = toupper(title[i]);
            }
            i = j + 1;
        }
        return title;
    }
};

int main(){

return 0;
}