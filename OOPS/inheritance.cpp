#include<iostream>
using namespace std;
class animal{
     public:
     void bark(){
        cout<<" barking";
     }
};

class dog : public animal{
    public:
    void eat(){
         cout<<" eats";
    }
};
int main(){
dog *d = new dog();
d->bark();
d->eat();
return 0;
}