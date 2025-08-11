#include<iostream>
using namespace std;
void insertion(int arr[],int i,int n){
    // for(int i=0;i<=n-1;i++){
    //   int j=i;
    //   while(j>0 && arr[j-1]>arr[j]){
    //     swap(arr[j],arr[j-1]);
    //     j--;
    //   }
    // }

    //recursive approach 
    if(i == n) return;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
   insertion(arr,i+1,n);
}
int main(){
int arr[5]={5,4,3,2,1};
int n=5;
insertion(arr,0,n);
  cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}