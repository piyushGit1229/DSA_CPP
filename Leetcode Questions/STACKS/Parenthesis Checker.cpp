#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(char c:s){
        
            if(c == '(' || c == '{' || c == '[') {
                st.push(c); // push opening bracket
            }
            
            else{
                if(st.empty()) return false;
                char top = st.top(); st.pop();
                if((c==')' && top !='(') 
                || (c==']' && top!='[') 
                || (c=='}' && top!='{'))
                {
                    return false;
                }
            }
        }
        return st.empty(); //returns true if its empty
    }
};

int main(){

return 0;
}
