
#include<iostream>
using namespace std;
void rev(int arr[],int start,int end){
if( start>=end){
    return;
}
swap(arr[start],arr[end]);
rev(arr,start+1,end-1);
}


void printarray(int arr[],int n){
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   rev(arr, 0, n - 1);
   printarray(arr,n);
return 0;
}