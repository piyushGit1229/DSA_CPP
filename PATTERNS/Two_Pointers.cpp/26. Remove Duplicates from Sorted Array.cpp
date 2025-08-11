#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>&arr){
if(arr.empty()){
    return 0;
}
int j=1;
for(int i=1;i<arr.size();i++){
    if(arr[i]!=arr[i-1]){
        arr[j]=arr[i];
        j++;
    }
}
return j;
}
int main(){
vector<int>arr={0,0,1,1,1,2,2,3,3,4};
int len=removeDuplicates(arr);
for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
}

return 0;
}