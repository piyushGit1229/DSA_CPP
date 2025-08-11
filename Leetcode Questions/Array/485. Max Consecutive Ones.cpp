#include<iostream>
using namespace std;
int consecutive(int arr[],int n){
    int maxi = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            count=0;
        }
        maxi = max(count,maxi);
    }
    return maxi;
}
int main(){
int n=6;
int arr[6]={1,1,0,1,1,1};
cout<<consecutive(arr,n);
return 0;
}