// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     unordered_map<long long, int> mp;
//     long long sum = 0;
//     int maxLen = 0;

//     for (int i = 0; i < a.size(); i++) {
//         sum += a[i];

//         if (sum == k) {
//             maxLen = i + 1;
//         }

//         if (mp.find(sum - k) != mp.end()) {
//             maxLen = max(maxLen, i - mp[sum - k]);
//         }

//         if (mp.find(sum) == mp.end()) {  // ? fixed here
//             mp[sum] = i;
//         }
//     }int longestSubarrayWithSumK(vector<int> a, long long k) {
//     unordered_map<long long, int> mp;
//     long long sum = 0;
//     int maxLen = 0;

//     for (int i = 0; i < a.size(); i++) {
//         sum += a[i];

//         if (sum == k) {
//             maxLen = i + 1;
//         }

//         if (mp.find(sum - k) != mp.end()) {
//             maxLen = max(maxLen, i - mp[sum - k]);
//         }

//         if (mp.find(sum) == mp.end()) {  // ? fixed here
//             mp[sum] = i;
//         }
//     }

//     return maxLen;
// }


//     return maxLen;
// }



#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(vector<int> arr, long long k) {
unordered_map<int,int>mp;
long long sum=0;
int maxlen=0;
int n=arr.size();
for(int i=0;i<n;i++){
    sum=sum+arr[i];
    if(sum==k){
        maxlen=max(maxlen,i+1);
    }
    if(mp.find(sum-k)!=mp.end()){
        maxlen=max(maxlen,i-mp[sum-k]);
    }
    if(mp.find(sum)==mp.end()){
        mp[sum]=i;
    }
}
return maxlen;
}
int main(){
    vector<int>arr={ 1,2,3,4,5};
    long long k=9;
    cout<<longestSubarrayWithSumK(arr,k)<<endl;
    
return 0;
}