#include<iostream>
using namespace std;
bool isPalindrome(int n){
    // int original= n;
    // int reverse = 0;
    // int answer = 0;
    // while(n!=0){
    // int digit = n%10;
    // answer = answer * 10+digit;
    // n = n/10;
    // }
    // return (original == answer);


    //Two pointer approach
    int left = 0;
    int right = n-1;

    string numStr = to_string(n);

    while(left<right){
    if(numStr[left]!= numStr[right]){
     return false;
    }
    left++;
    right--;
    }
    return true;
}
int main(){
    int n;
cout<<"Enter the number:";
cin>>n;
isPalindrome(n);
return 0;
}