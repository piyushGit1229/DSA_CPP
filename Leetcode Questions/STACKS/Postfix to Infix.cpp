#include<bits/stdc++.h>
using namespace std;

bool isoperator(char c){
    return(c == '+' || c == '-' || c=='*' || c =='/');
    
}
string postToInfix(string postfix) {
    // Write your code here.
    stack<string>st;
    for(char c:postfix){
        if(isoperator(c)){
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            st.push("(" + op1 + c + op2 + ")");
        }
         else{
             st.push(string(1, c));
        }
    }
    return st.top();
   
}

int main(){

return 0;
}