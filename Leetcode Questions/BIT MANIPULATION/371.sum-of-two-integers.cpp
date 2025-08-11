#include<iostream>
using namespace std;
class Solution {
    public:
    int getSum(int a,int b){
        if(b==0){
            return a; // If b is 0, return a
        } 
    int sum = a^b;
    int carry = (a&b)<<1; // Calculate carry
    return getSum(sum, carry); // Recursive call with sum and carry
    }

};
int main(){
Solution sol;
int a,b;
cout << "Enter two integers: ";
cin >> a >> b;
int result = sol.getSum(a, b);
cout << "Sum of " << a << " and " << b << " is: " << result << endl;
return 0;
}