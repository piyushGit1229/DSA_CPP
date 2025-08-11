#include<iostream>
using namespace std;
class Solution {
    public:
    int binarytodecimal(string binary){
        int num = 0;
        int power = 1; // Initialize power of 2
        int n = binary.length();
        for(int i=n-1; i>=0;i--){
            if(binary[i]=='1'){
                num = num + power;
            }
            power = power * 2; // Increase power of 2
            // Note: The loop should run from n-1 to 0, not n to 0
        }
        return num;
    }

};
int main(){
Solution sol;
string binary;
cout << "Enter a binary number: ";
cin >> binary;
int result = sol.binarytodecimal(binary);
cout << "Decimal representation: " << result << endl;   
return 0;
}



//DRY RUN 

/*string binary = "1011";
int num = 0;
int pow = 1;

We go from right to left:

i = 3 → binary[3] = '1'
    → num = num + pow = 0 + 1 = 1
    → pow = pow * 2 = 2

i = 2 → binary[2] = '1'
    → num = num + pow = 1 + 2 = 3
    → pow = pow * 2 = 4

i = 1 → binary[1] = '0'
    → num = unchanged = 3
    → pow = 4 * 2 = 8

i = 0 → binary[0] = '1'
    → num = num + pow = 3 + 8 = 11
    → pow = 8 * 2 = 16

Final result: num = 11
*/