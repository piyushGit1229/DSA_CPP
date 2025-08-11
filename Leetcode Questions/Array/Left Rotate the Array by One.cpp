// arr[] = {1,2,3,4,5}
// after left rotation = {2,3,4,5,1}
//BRUTE FORCE
//create a temp array and stroe the ifrst element
//put all elements except the first one in a new array
//put the temp array at last of the array

#include<iostream>
using namespace std;

void shift(int arr[],int n){
int temp =arr[0];
for(int i=0;i<n;i++){
    arr[i]=arr[i+1];
}
arr[n-1]=temp;

for(int i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
int n=5;
int arr[]= {1,2,3,4,5};
shift(arr, n);
return 0;
}