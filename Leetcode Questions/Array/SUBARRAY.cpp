#include<iostream>
using namespace std;
void subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
int n = 3;
int arr[n]={1, 2, 3};
subarray(arr,n);
return 0;
}