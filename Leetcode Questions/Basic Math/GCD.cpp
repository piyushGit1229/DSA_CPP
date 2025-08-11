
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return 0;
    }
    return (b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
cout<<"Enter first number for gcd:";
cin>>a;
cout<<"Enter second number for gcd:";
cin>>b;
cout<<gcd(a,b);

return 0;
}