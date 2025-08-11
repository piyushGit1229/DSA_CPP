#include<iostream>
using namespace std;
int missing(int arr[],int n){
int totalsum = n*(n+1)/2;
int sum =0;
for( int i=0;i<n;i++){
    sum = sum +arr[i];
}
return totalsum-sum;
}
int main(){
int n = 3;
int arr[3]={3,0,1};
cout<<missing(arr,n);
return 0;
}