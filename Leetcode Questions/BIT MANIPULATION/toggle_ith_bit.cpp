#include<iostream>
using namespace std;
void clearBit(int num,int i){
    int mask = (i<<1);
    num = num ^ mask;
    cout << "Number after toggling bit at position " << i << ": " << num << endl;

}
int main(){
int num, i;
cout << "Enter the number: ";
cin >> num;
cout << "Enter the position of the bit to toggle: ";
cin >> i;
clearBit(num, i);
cout << "Updated number: " << num << endl;
cout << "Bit at position " << i << " is now toggled." << endl;
return 0;
}