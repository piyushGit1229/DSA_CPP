// #include<unordered_map>
// class Solution {
//   public:
//     int longestKSubstr(string &s, int k) {
//         // code here
//         int n=s.size();
//         unordered_map<char,int>mp;
//         int maxlen=-1;
//         int i=0;
    
//         for(int j=0;j<n;j++){
//             mp[s[j]]++;
//             while(mp.size()>k){
//                 mp[s[i]]--;
//                 if(mp[s[i]]==0){
//                     mp.erase(s[i]);
//                 }
//                 i++;
//             }
//             if(mp.size()==k){
//                 maxlen=max(maxlen,j-i+1);
//             }
//         }
//         return maxlen;
//     }
// };