#include<iostream>
using namespace std;
int calculatepow(int a, int b){
    if(b==0){
        return 1;
    }
    return a* calculatepow(a,b-1);
}
int main(){
calculatepow(2,2);
return 0;
}