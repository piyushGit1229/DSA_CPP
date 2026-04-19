#include<iostream>
using namespace std;

class bank{
    private:
    int balance;
    
    // getter and setter
    public:

    void setbalance(int b){
        balance = b;
    }
    int getbalance(){
        return balance;
    }
};
int main(){
// bank b;// this is one way of creating objects and uses stack memory
//way - 2
bank *b = new bank();
b->setbalance(100);
cout<<b->getbalance();
return 0;
}