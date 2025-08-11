#include<iostream>
using namespace std;
int n;// 0 1 1 2 3 5 8 13 
int a=0;
int b=1;
int c;
int main(){
cout<<"Enter the number :";
cin>>n;

 if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";


for(int i=2;i<n;i++){
c=a+b;
a=b;
b=c;
cout<<c<<" ";
}

return 0;
}