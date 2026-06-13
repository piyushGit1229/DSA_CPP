/*
Encapsulation:
Encapsulation in OOP binds data (variables) and behavior (methods) together into a single unit (class). 
It restricts direct access to an object's data, allowing it to be modified and inspected only through designated, 
controlled methods like getters and setters

Encapsulation is achieved by combining access modifiers (like private, protected, and public) with controlled methods

For example, in a banking application, the account balance should not be modified directly by any external module. 
Instead, operations such as deposit() and withdraw() are provided. This prevents invalid actions like setting the balance
to a negative value and ensures business rules are enforced.

*/

#include<iostream>
using namespace std;
class BankAccount{
    private:
    int balance;

    public:
    void setbalance(int b){
        balance = b;
    }

    void withdraw(int amount){
        balance -= amount;
    }
    int getbalance(){
        return balance;
    }
};
int main(){
BankAccount *b = new BankAccount();
b->setbalance(100);
cout<<b->getbalance();
return 0;
}