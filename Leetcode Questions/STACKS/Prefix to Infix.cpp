#include<bits/stdc++.h>
using namespace std;

bool isoperand(char c) {
    return ( (c >= 'A' && c <= 'Z') ||   // Uppercase letters
             (c >= 'a' && c <= 'z') ||   // Lowercase letters
             (c >= '0' && c <= '9') );   // Digits
    }

string prefixToInfixConversion(string &s){
	// Write your code here.
	stack<string>st;
	int n = s.size();
	int i=n-1;
	for(int i=n-1;i>=0;i--){
    if(isoperand(s[i])){
		 st.push(string(1, s[i]));
	}
	else{
		string op1 = st.top(); st.pop();
		string op2 = st.top(); st.pop();
		string conc = '('+op1 + s[i] + op2 + ')';
		st.push(conc);
	}
	}
	return st.top();
}

int main(){

return 0;
}
