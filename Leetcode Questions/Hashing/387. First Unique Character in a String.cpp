// class Solution {
// public:
//     int firstUniqChar(string s) {
//         // for(int i=0;i<s.length();i++){
//         //     bool isunique=true;
//         //     for(int j=0;j<s.length();j++){
//         //         if(i!=j && s[i]==s[j]){
//         //             isunique=false;
//         //             break;
//         //         }
//         //     }
//         //     if(isunique){
//         //         return i;
//         //     }
//         // }
//         // return -1;

//         //using HashMap

//         map<char,int>freq;
//         for(int i=0;i<s.size();i++){
//          freq[s[i]]++;
//         }

//         for(int i=0;i<s.size();i++){
//             if(freq[s[i]]==1){
//                 return i;
//             }
//         }

//         return -1;

//     }
// };