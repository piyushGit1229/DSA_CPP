#include<iostream>
using namespace std;
double findaverage(int arr[],int k,int n){
int sum=0;
int maxSum =0;
int i=0;
int j=0;
while(j<n){
    sum = sum + arr[j];
    if(j-i+1<k){
        j++;
    }
    else if(j-i+1 == k){
        maxSum=max(maxSum,sum);
        sum = sum -arr[i];
        i++;
        j++;
    }
}
return maxSum-k;
}
int main(){
int n=10;
int arr[n]={1,12,-5,-6,50,3};
int k=4;
cout<<findaverage(arr,k,n);
return 0;
}