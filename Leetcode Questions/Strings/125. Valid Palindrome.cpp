#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int i=0;
    int j = s.size() - 1;
    while(i<=j){
        while(i<j && !isalnum(s[i])){
            i++;
        }
        while(i<j && !isalnum(s[j])){
            j--;
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    if (ispalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

return 0;
}