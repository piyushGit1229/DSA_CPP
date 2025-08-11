#include<iostream>
using namespace std;
void count(int n){
    int ans = 0;
    while(n!=0){
        
    int digit = n%10;
    ans = ans * 10 + digit;
    n=n/10;
    }
    cout<<ans;
}
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
count(n);
return 0;
}