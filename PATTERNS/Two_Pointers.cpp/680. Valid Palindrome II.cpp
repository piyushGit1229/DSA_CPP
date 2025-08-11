// class Solution {
// public:
//     bool ispalindrome(int i,int j,string s){
//        while(i<j){
//         if(s[i++] !=s[j--]){
//             return false;
//         }
//        } return true;
//     }

//     bool validPalindrome(string s) {
//         int left=0;
//         int right=s.length()-1;

//         while(left<right){
//             if(s[left]==s[right]){
//                 left++;
//                 right--;
//             }
//             else{
//                return ispalindrome(left+1,right,s) || ispalindrome(left,right-1,s);
//             }
//         }
//         return true;
//     }
// };