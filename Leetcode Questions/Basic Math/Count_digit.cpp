#include<iostream>
using namespace std;
void count(int n){
    int count=0;
    while(n!=0){
    n = n/10;
    count++;
    }
    cout<<count;
}
int main(){
int n;
cout<<"Enter the number: ";
cin>>n;
count(n);
return 0;
}