#include<iostream>
using namespace std;
bool check(int arr[],int n){
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]>arr[(i+1)%n]){
        count++;
    }
}
return count <=1;
}
int main(){
int n=5;
int arr[5]={3,4,5,1,2};
check(arr,n);
if(check){
    cout<<"ROtated and sorted"<<endl;
}
else{
    cout<<"NOt sorted and rotated"<<endl;
}
return 0;
}