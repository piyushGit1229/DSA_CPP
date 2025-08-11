#include<iostream>
using namespace std;
void checkBit(int num,int i){
    int bit =(num>>i)&1;
    cout<<bit<<endl;

}
int main(){
int num,i;
cout << "Enter a number: ";
cin >> num;
cout << "Enter the bit position to check: ";
cin >> i;
checkBit(num, i);

return 0;
}