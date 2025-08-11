#include<iostream>
using namespace std;
void move(int arr[],int n){
int i=0;
for(int j=0;j<n;j++){
if(arr[j]!=0){
    swap(arr[i],arr[j]);
}
i++;
}
}
int main(){
    int n;
    int arr[n];
cout<<"Enter the size of array:";
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
move(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}