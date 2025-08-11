#include<iostream>
using namespace std;
bool binarysearch(int arr[],int key,int n){
    int start=0;
    int end=n-1;
    
    while(start<end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key){
            return true;
        }
        else if(arr[mid]<key){
        start=mid+1;
        }
        else{
        end = mid-1;
        }
    }
    return false;
}
int main(){
int arr[5]={1,2,3,4,5};
int n=5;
int key=56;
bool result = binarysearch(arr,key,n);
if(result){
    cout<<"Element fOUND";
}
else{
    cout<<"Element not found"<<endl;
}
return 0;
}