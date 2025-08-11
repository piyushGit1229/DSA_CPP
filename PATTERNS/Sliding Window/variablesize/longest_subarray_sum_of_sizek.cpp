//works only for positive numbers

#include<iostream>
#include<cmath>

using namespace std;
int longest(int arr[],int k,int n){
 int i=0;
 int j=0;
 int maxlen=0;
 int sum=0;
 while(j<n){
    sum=sum+arr[j];
    if(sum>k && i<=j){
      sum=sum-arr[i];
      i++;
    }
    if(sum==k){
        maxlen=max(maxlen,j-i+1);
    }
    j++;
 }
 return maxlen;
}
int main(){

    int arr[] = {10, 5, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;

    int result = longest(arr, k, n);
    cout << "Longest subarray length with sum " << k << " is: " << result << endl;

return 0;
}



// optimized approach for negative numbers

// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         // code here
//         int n=arr.size();
//         int maxlen=0;
//         unordered_map<int,int>mp;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum=sum+arr[i];
//             if(sum==k){
//                 maxlen=max(maxlen,i+1);
//             }
//             if(mp.find(sum-k)!=mp.end()){
//                 maxlen=max(maxlen,i-mp[sum-k]);
//             }
//             if(mp.find(sum)==mp.end()){
//                 mp[sum]=i;
//             }
        
//         }
//         return maxlen;
//     }
// };