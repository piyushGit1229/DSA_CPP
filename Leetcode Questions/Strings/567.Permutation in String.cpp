// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         int n1 = s1.length();
//         int n2 = s2.length();

//         if(n1>n2){
//             return false;
//         }
//         sort(s1.begin(),s1.end());
//         for(int i=0;i<n2;i++){
//             string substring = s2.substr(i,n1);
//             sort(substring.begin(),substring.end());

//             if(s1==substring) return true;
//         }
//         return false;
//     }
// };