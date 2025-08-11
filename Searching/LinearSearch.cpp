#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
if(n==0){
    return false;
}
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return true;
    }
}
return false;
}
int main(){
int arr[5]={1,2,3,4,5};
int n=5;
int key=5;
bool result=search(arr,n,key);
if(result){
    cout<<"Element Found";
}
else{
    cout<<"Element not found";
}
return 0;
}