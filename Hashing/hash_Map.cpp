#include<iostream>
#include <map>
using namespace std;
int main(){
int n;
cout<<"Enter the size of the array u want:";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array:";
for(int i=0;i<n;i++){
cin>>arr[i];
}

//Hash Map creation syntax 

map<int,int>mpp;
for(int i=0;i<n;i++){
    mpp[arr[i]]++;
}

int q;
cout<<"Enter the number of queries:";
cin>>q;
while(q--){
    int number;
    cout<<"Enter the numers now:";
    cin>>number;
    cout<<mpp[number];
}

return 0;
}