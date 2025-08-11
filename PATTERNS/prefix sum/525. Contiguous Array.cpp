#include<iostream>
#include <map>
using namespace std;
int findmaxlength(int arr[],int n){
map<int,int>prefixindex;
prefixindex[0]=-1;
int sum =0;
int maxlen=0;
//convert 0 to -1
for(int i=0;i<n;i++){
    if(arr[i]==0){
        sum += -1;
    }
    else{
        sum += 1;
    }
    if(prefixindex.find(sum)!=prefixindex.end()){
    maxlen = max(maxlen,i-prefixindex[sum]);
    }
    else{
        prefixindex[sum]=i;
    }
}
return maxlen;

}
int main(){

return 0;
}