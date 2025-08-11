// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution{
//     public:
//     vector<vector<int>>result;

//     bool ispalindrome(string &s,int start,int end){
//         while(start<end){
//             if(s[start]!=s[end]){
//                 return false;
//                 start++;
//                 end--;
//             }
//             return true;
//         }
//     }
//     void backtrack(string &s,int index,vector<int>&path){
//         if(index ==s.size()){
//             result.push_back(path);
//             return;
//         }
//         for(int i=index;i<s.size();i++){
//             if(ispalindrome(s,index,i)){
//                 path.push_back(s.substr(index,i-index+1));
//                 backtrack(s,i+1,path);
//                 path.pop_back();
//             }
//         }

//     }

//      vector<vector<string>> partition(string s) {
//         vector<string>path;
//         backtrack(s,0,path);
//         return result;

//     }
// };
// int main(){

// return 0;
// }