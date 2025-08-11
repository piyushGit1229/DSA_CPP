#include<iostream>
using namespace std;

class Solution{
    public:
    void checkBit(int num,int i){

    if(num &(1<<i)){
    cout<<"Bit is set at position"<<i<<endl; //if 1 then set bit and if 0 then not set bit
    }
    else
    cout<<"Bit is not set at position"<<i<<endl;
    }
};
int main(){
Solution sol;
int num;
int i;
cout<<"Enter the number: ";
cin>>num;
for(int i=0;i<num;i++){
    sol.checkBit(num,i);
}
return 0;
}