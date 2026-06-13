#include<iostream>
using namespace std;

class shape{
    public:
    virtual void draw(){
        cout<<"Base class draws"<<endl;
    }
};

class cicle : public shape{
    public:
    void draw(){    //the virtual function is getting overriden in the derived class
        cout<<"Circle class draws"<<endl;
    }
};
int main(){
shape* s = new cicle();
s->draw(); 
return 0;
}

