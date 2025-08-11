#include<iostream>
#include<vector>
using namespace std;

bool issum(int i,int sum,vector<int>&arr,int k){
if(sum == k){
    return;//if sum equals to the givern number
}
if(i == arr.size()){
    return false; //if index comes to end means no sum was found
}

if(issum(i+1,sum + arr[i],arr,k))
return true;

if(issum(i+1,sum,arr,k))
return true;

return false;
}
int main(){
    vector<int>arr ={1,2,3};
    int k=5;
   bool found = issum(0,0,arr,k);
   if(found){
   cout<<"True";
   }
   else{
    cout<<"False";
   }

return 0;
}