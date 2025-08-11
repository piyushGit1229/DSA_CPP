#include<iostream>
using namespace std;
void clearBit(int num,int i){
    int mask = ~(1<<i); // Create a mask with the ith bit cleared
    num = num & mask; // Clear the ith bit using bitwise AND
    cout << "Number after clearing bit at position " << i << ": " << num << endl;
}
int main(){
int num, i;
cout << "Enter the number: ";
cin >> num;
cout << "Enter the position of the bit to clear: ";
cin >> i;
clearBit(num, i);
cout << "Updated number: " << num << endl;
cout << "Bit at position " << i << " is now cleared." << endl;
return 0;
}