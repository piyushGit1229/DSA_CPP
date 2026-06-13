#include<iostream>
using namespace std;
/*pure virtual functions are used for abstraction class it is basically something that only tells 
what to do and not how to do the actual implementation is done in the derived class

syntax is simle as virtual function_name() = 0; //0 tells that it is not clear that how it will be
implemented for example lets take an exmple of shape class in shape class it draws based on the shape
so here the draw method will be absract
*/

class shape{
    public:
    virtual void draw() = 0; //pure virtual function
};

//the upper shape class is abstract

class circle:public shape{
    public:
    void draw(){
        cout<<"the circle class is drawing"<<endl;
    }
};

class rectangle:public shape{
    public:
    void draw(){
        cout<<"the  rectangle is drawing"<<endl;
    }
};

int main(){
shape* s = new circle(); //decided at runtime here
s->draw();

shape* s2 = new rectangle();
s2->draw();

return 0;
}