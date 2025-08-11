//Simple Approach

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         for(int i=0;i<s.length();i++){
//             bool isunique=true;
//             for(int j=0;j<s.length();j++){
//                 if(i!=j && s[i]==s[j]){
//                     isunique=false;
//                     break;
//                 }
//             }
//             if(isunique){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };