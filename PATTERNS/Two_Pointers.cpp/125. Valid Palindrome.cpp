#include<iostream>
using namespace std;
bool isPalindrome(string s){
int left=0;
int right=s.length()-1;

while(left<right){
    if(!isalnum(s[left])){
        left++;
    }
    else if(!isalnum(s[right])){
        right--;
    }
    else if(tolower(s[left])!=tolower(s[right])){
        return false;
    }
    else{
        left++;
        right--;
    }
}
return true;
}
int main(){
string s;
cout<<"Enter test cases:";
cin>>s;
isPalindrome(s);
if(isPalindrome){
    cout<<"Palindrome";
}
else{
    cout<<"NOt palindrome";
}

return 0;
}