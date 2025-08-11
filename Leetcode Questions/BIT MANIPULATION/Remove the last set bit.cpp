#include<iostream>
using namespace std;
void clearBit(int num , int i){
    num = num & (num -1); // Clear the last set bit
    cout << "Number after removing the last set bit: " << num << endl;

}
int main(){
int num, i;
cout << "Enter the number: ";
cin >> num;
clearBit(num, i);
cout << "Updated number: " << num << endl;
cout << "Last set bit has been removed." << endl;
return 0;
}