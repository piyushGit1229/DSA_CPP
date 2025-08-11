#include<iostream>
using namespace std;
bool search(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
      if(arr[mid]==target){
        return true;
      }
      else if(arr[mid]<target){
        start=mid+1;
      }
      else{
        end=mid-1;
      }
     
    }
     return false;
}
int main(){
int n=5;
int arr[n]={1,2,3,4,5};
int target=5;
bool result= search(arr,n,target);
if(result){
    cout<<"Element found"<<endl;
}
else{
    cout<<"Not found"<<endl;
}
return 0;
}