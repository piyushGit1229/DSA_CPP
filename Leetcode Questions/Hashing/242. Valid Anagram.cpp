// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         // if(s.size()!=t.size()){
//         //     return false;
//         // }
//         // sort(s.begin(),s.end());
//         // sort(t.begin(),t.end());
//         // if(s==t){
//         //     return true;
//         // }
//         // else{
//         //     return false;
//         // }

//         //using hashmap 
//         map<char,int>s1;
//         for(int i=0;i<s.length();i++){
//          s1[s[i]]++; // store all characters of s in hashmap
//         }

//         map<char,int>t2;
//         for(int i=0;i<t.length();i++){
//          t2[t[i]]++;
//         }

//         if(s1 == t2){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };