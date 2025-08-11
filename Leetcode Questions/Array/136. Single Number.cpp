#include<iostream>
using namespace std;
void single(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
}
int main(){
int n=5;
int arr[n]={2,2,1};
single(arr,n);
return 0;
}