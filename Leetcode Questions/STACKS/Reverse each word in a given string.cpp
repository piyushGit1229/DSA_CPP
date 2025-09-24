#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stack<char>st;
        string result;
        int n=s.size();
        int i=0;
        
        while(i<n){
            //remove leading space
            while(i<n && s[i]==' ') i++;
            
            while(i<n && s[i] != ' '){
                st.push(s[i]);
                i++;
            }
            
            while(!st.empty()){
                result += st.top();
                st.pop();
            }
            
            if(i<n){
                result += ' ';
            }
        }
        if (!result.empty() && result.back() == ' ') result.pop_back();
        return result;
    }
};

int main(){

return 0;
}