#include<iostream>
using namespace std;
void Bubble(int arr[],int n){
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //     if(arr[j]>arr[j+1]){
    //         swap(arr[j],arr[j+1]);
    //     }
    //     }
    // }
    //Recursive Approach

    if(n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    Bubble(arr,n-1);

}
int main(){
int arr[5]={5,4,3,2,1};
int n=5;
Bubble(arr,n);
  cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}