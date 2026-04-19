#include<iostream>
using namespace std;
class shape{
    public:
    void draw(){
        cout<<"Base class draw function is drawing";
    }
};

class square : public shape{
    public:
    void draw(){
        cout<<"Derived class drawing";
    }
};
int main(){
shape* s = new square();
s->draw();
}
