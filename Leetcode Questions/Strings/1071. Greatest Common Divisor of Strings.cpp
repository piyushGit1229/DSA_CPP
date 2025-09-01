// For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

// Example 1:

// Input: str1 = "ABCABC", str2 = "ABC"
// Output: "ABC"




#include<bits/stdc++.h>
#include <numeric>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      int n=str1.length();
      int n2=str2.length();
      if(str1+str2 != str2+str1){
        return "";
      }  
      else{
        // return str2.substr(0,gcd(n,n2));
      }
    }
};

int main(){

return 0;
}