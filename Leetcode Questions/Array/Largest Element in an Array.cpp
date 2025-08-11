#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,43,4,5};
int n=5;
int large=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>large){
        large=arr[i];
    }
}
cout<<"Largest element in the arraay is :"<<large<<endl;
return 0;
}