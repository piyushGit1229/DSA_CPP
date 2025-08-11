#include<iostream>
using namespace std;
class Solution {
public:
int range(int left , int right){
    int shift = 0;
    while(left != right){
    left = left >> 1;
    right = right >> 1;
    shift++;
}
return left <<shift;
}
};
int main(){
Solution sol;
int left, right;
cout << "Enter the left and right range: ";
cin >> left >> right;
int result = sol.range(left, right);
cout << "Bitwise AND of numbers in range [" << left << ", " << right << "] is: " << result << endl;

return 0;
}