#include<iostream>
#include <map>
using namespace std;
int longsubarray(int arr[],int n,int k){
 map<int,int>mp;
 int sum=0;
 int maxlen=0;
 for(int i=0;i<n;i++){
    sum = sum + arr[i];
    if(sum == k){
        maxlen=i+1;
    }
    if(mp.find(sum - k)!=mp.end()){
        maxlen=max(maxlen,i-mp[sum-k]);
    }
    if(mp.find(sum)== mp.end()){
        mp[sum]=i;
    }
 }
 return maxlen;
}
int main(){

return 0;
}