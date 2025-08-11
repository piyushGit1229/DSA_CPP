#include<iostream>
using namespace std;
int main(){
int x = 5;
int y = x>>1; // Right shift by 1
int z = x<<1; // Left shift by 1
cout << "Original: " << x << endl;
cout << "Right Shift by 1: " << y << endl;
cout << "Left Shift by 1: " << z << endl;
cout << "Right Shift by 2: " << (x>>2) << endl; // Right shift by 2
cout << "Left Shift by 2: " << (x<<2) << endl; // Left shift by 2
return 0;
}