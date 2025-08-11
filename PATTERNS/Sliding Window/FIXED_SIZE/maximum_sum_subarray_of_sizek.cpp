// 🧾 Problem Statement & References
// Problem:
// Given an array of positive integers and a positive integer k, 
//find the maximum sum of any contiguous subarray of size k.
// Return that sum. If k exceeds the length of the array, return an invalid indicator (
//e.g. 0 or -1).

// Example:
// Input: arr = [2, 1, 5, 1, 3, 2], k = 3  
// Output: 9  
// Explanation: The subarray with maximum sum of size 3 is [5, 1, 3].



#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int n, int k) {
    int i=0;
    int j=0;
    int sum=0;
    int maxsum=0;
    while(j<n){
        sum=sum+arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1 == k){
            maxsum = max(maxsum,sum);
            sum=sum-arr[i];
            i++;
            j++;
        }
    }
    return maxsum;
}
int main(){
int n=6;
int arr[6]={2, 1, 5, 1, 3, 2};
int k=3;
cout<<maxSubarraySum(arr,n,k)<<endl;
return 0;
}