#include <iostream>
#include <vector>
#include <string>
using namespace std;

string intToRoman(int num) {
    // Values and corresponding Roman symbols
    static vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 
                              40, 10, 9, 5, 4, 1};
    static vector<string> sym = {"M", "CM", "D", "CD", "C", "XC", "L", 
                                 "XL", "X", "IX", "V", "IV", "I"};

    string result = "";
    for (int i = 0; i < 13; i++) {
        int times = num / val[i]; // How many times this value fits
        while (times--) {
            result += sym[i];
        }
        num = num % val[i]; // Reduce the number
    }
    return result;
}

int main() {
    // Example test cases
    cout << "3749 -> " << intToRoman(3749) << endl;  // Expected: MMMDCCXLIX
    cout << "58   -> " << intToRoman(58) << endl;    // Expected: LVIII
    cout << "1994 -> " << intToRoman(1994) << endl;  // Expected: MCMXCIV
    return 0;
}
