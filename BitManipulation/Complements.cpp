#include<iostream>
#include <bitset>
using namespace std;

class Solution {
    public:
    int findcomplement(int num){
        const int BIT_SIZE = 8;

    int ones_complement = ~num; // Step 1: Calculate one's complement;
    int twos_complement = ones_complement +1 ; // Step 2: Calculate two's complement

    cout << "Number: " << num << endl;
    cout << "Binary: " << bitset<BIT_SIZE>(num) << endl;

    cout << "One's complement in decimal: " << ones_complement << endl;
    cout << "Two's complement in decimal: " << twos_complement << std::endl;

    
    cout << "One's complement in binary: " << bitset<BIT_SIZE>(ones_complement) << endl;
    cout << "Two's complement in binary: " << bitset<BIT_SIZE>(twos_complement) << std::endl;

    }
};

int main(){
Solution sol;
int num;
cout << "Enter a number: ";
cin >> num;
int result = sol.findcomplement(num);
return 0;
}