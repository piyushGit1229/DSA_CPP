#include<iostream>
using namespace std;

void printSubsequence(string input,string output,int i){
    if(i==input.length()){
        return;
    }
    printSubsequence(input,output+input[i],i+1);
    printSubsequence(input,output,i+1);
}
int main(){

return 0;
}