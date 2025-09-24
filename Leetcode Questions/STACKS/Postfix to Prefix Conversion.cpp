// User function Template for C++
#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        stack<string>st;
        
        for(char c: post_exp){
            if(isalpha(c) || isdigit(c)){
                st.push(string(1,c));
            }
            else{
                string op2 = st.top(); st.pop();
                string op1 = st.top(); st.pop();
                
                string temp = c+op1+op2;
                st.push(temp);
            }
        }
        return st.top();
    }
};