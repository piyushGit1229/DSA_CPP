#include<iostream>
using namespace std;

bool checkPlaindrome(string s){
    int left = 0;
    int right = s.length()-1;
    while(left<right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
       else if(tolower(s[left]!= tolower(s[right]))){
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
string s = "A man, a plan, a canal: Panama";
if(checkPlaindrome(s)){
    cout<<"Palindrome";
}
else{
    cout<<"HEL NAHHH";
}
return 0;
}