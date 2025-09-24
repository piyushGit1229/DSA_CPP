#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverse(const string& S) {
        // code here
       stack<char>st;
       string result="";
       for(char c : S){
           st.push(c);
       }
       
       while(!st.empty()){
          result = result + st.top();
          st.pop();
       }
       return result;
    }
};

int main(){

return 0;
}
