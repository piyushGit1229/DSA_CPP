#include<iostream>
using namespace std;

bool issorted(int arr[],int n){
    if(n==0 || n==1)
    return true;

    if(arr[0]>arr[1]){
        return false;
    }
    return issorted(arr+1,n-1);

}
int main(){
    int n=5;
int arr[n]={1,2,3,4,5};
if(issorted(arr,n)){
    cout<<"Sorted"<<endl;
}
else{
    cout<<" Not Sorted"<<endl;
}
return 0;
}