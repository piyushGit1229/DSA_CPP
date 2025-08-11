// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//     map<char,int>freq1;
//     for(int i=0;i<ransomNote.size();i++){
//         freq1[ransomNote[i]]++;
//     }
//     map<char,int>freq2;
//     for(int i=0;i<magazine.size();i++){
//         freq2[magazine[i]]++;
//     }

//     for(auto it:freq1){
//         int ch = it.first;
//         int needed = it.second;

//         if(freq2[ch]<needed){
//             return false;
//         }
//     }
//     return true;
    
//     }
    
// };