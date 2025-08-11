#include <iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;                  // Step 1: All bits set to 1
        while (mask & num)                  // Step 2: Move mask left until it's just beyond num
            mask = mask << 1;
        return ~num ^ mask;                 // Step 3: Flip num and mask extra bits
    }
};
int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = sol.findComplement(num);
    cout << "The complement of " << num << " is: " << result << endl;
    return 0;
}