#include<iostream>
using namespace std;
int longestSubarrayWithSumK(int arr[],int k,int n){
    int i=0,j=0;
    int maxLen = 0;
    int sum = 0;
    while(j<n){
        sum = sum + arr[j];
        while(i<=j && sum>k){
            sum = sum - arr[i];
            i++;
        }
        if(sum == k){
            maxLen=max(maxLen,j-i+1);
        }
        j++;
    }
    return maxLen;
}

int main(){

return 0;
}