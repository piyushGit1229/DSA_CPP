#include<iostream>
#include <climits>
using namespace std;
int main(){
int arr[5]={1,2,34,5,6};
int n=5;
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
int secondmax= INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]!=max){
        if(arr[i]>secondmax){
            secondmax=arr[i];
        }
    }
} 
if(secondmax == INT_MIN)
        cout << "No second largest element exists\n";
    else
        cout << "Second largest element is: " << secondmax << endl;

    return 0;
return 0;
}