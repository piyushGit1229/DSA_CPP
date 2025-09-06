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


// //Start num = 3749

// i=0 val=1000 → times=3 → add "MMM" → result="MMM", num=749
// i=1 val=900  → times=0 → skip
// i=2 val=500  → times=1 → add "D"   → result="MMMD", num=249
// i=3 val=400  → times=0 → skip
// i=4 val=100  → times=2 → add "CC"  → result="MMMDCC", num=49
// i=5 val=90   → times=0 → skip
// i=6 val=50   → times=0 → skip
// i=7 val=40   → times=1 → add "XL"  → result="MMMDCCXL", num=9
// i=8 val=10   → times=0 → skip
// i=9 val=9    → times=1 → add "IX"  → result="MMMDCCXLIX", num=0
// Done → Output = "MMMDCCXLIX"
