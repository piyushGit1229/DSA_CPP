#include<iostream>
#include<vector>
using namespace std;
vector<int>divisors(int n){
    vector<int>result;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
        result.push_back(i);
        }
    }
    return result;
}
int main(){
int n;
cout<<"Enter the number :";
cin>>n;
int result = int(divisors(n).size());
cout<<result;
return 0;
}