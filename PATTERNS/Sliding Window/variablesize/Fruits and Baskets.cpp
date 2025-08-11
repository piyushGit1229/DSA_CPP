// #include<unordered_map>
// int findMaxFruits(vector<int> &arr, int n) {
//     // Write your code here.
//     unordered_map<int,int>mp;
//     int i=0;
//     int j=0;
//     int maxlen=0;
//     for(int j=0;j<n;j++){
//         mp[arr[j]]++;
//         while(mp.size()>2){
//             mp[arr[i]]--;
//             if(mp[arr[i]]==0){
//                 mp.erase(arr[i]);
//             }
//             i++;
//         }
//         maxlen=max(maxlen,j-i+1);
//     }
//     return maxlen;
// }