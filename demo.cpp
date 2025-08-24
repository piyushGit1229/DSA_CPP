#include<bits/stdc++.h>
using namespace std;
int main(){
// given "the sky is blue", reverse each word in place without changing word order → "eht yks si eulb".

string s = "the sky is blue";
reverse(s.begin(),s.end());
int start = 0;
for(int i=0;i<=s.length();i++){
    if(i == s.length() || s[i]==' '){
     reverse(s.begin()+start,s.begin()+i);
     start=i+1;
    }
}
cout<<s;



}