// class Solution {
//   public:
//     vector<int> countDistinct(vector<int> &arr, int k) {
//         // code here
//         int n = arr.size();
//         int i=0;
//         int j=0;
//         int count = 0;
//         map<int,int>mp;
//         vector<int>ans;
//         while(j<n){
//             mp[arr[j]]++;
            
//             if(j-i+1 == k){
//                 int size = mp.size();
//                 ans.push_back(size);
//                 mp[arr[i]]--;
//                 if(mp[arr[i]]==0){
//                     mp.erase(arr[i]);
//                 }
//                 i++;
//             }
//             j++;
//         }
//         return ans;
//     }
// };