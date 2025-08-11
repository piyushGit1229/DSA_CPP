#include<iostream>
#include <map>
using namespace std;
int largest(int arr[],int n){
    map<int,int>mp;
    mp[0]=-1;
    int sum =0;
    int maxi=0;
    
    for(int i=0;i<n;i++){
     sum= sum+arr[i];
        if(sum == 0){
            maxi=i+1;
        }
    if(mp.find(sum)!=mp.end()){
        maxi=max(maxi,i-mp[sum]);
    }
    }
    return maxi;
}
int main(){

return 0;
}