#include<iostream>
using namespace std;
void setBit(int num,int i){
  int mask = 1 << i; // Create a mask with the ith bit set
  num = num | mask; // Set the ith bit using bitwise OR
  cout << "Number after setting bit at position " << i << ": " << num << endl;
}
int main(){
int num, i;
cout << "Enter the number: ";
cin >> num;
cout << "Enter the position of the bit to set: ";   
cin >> i;
setBit(num, i);
cout << "Updated number: " << num << endl;
cout << "Bit at position " << i << " is now set." << endl;
return 0;
}