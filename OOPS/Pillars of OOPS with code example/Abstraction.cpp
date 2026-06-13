/*
Abstraction in Object-Oriented Programming (OOP) is the core concept of hiding complex internal implementation
details while exposing only the essential features of an object. It allows developers to focus on what an object
does rather than how it does it,

Implementation: It is primarily achieved using Abstract Classes and Interfaces.
Abstract Class: A restricted class that cannot be used to create objects. It can contain both abstract methods 
(no implementation) and regular methods (with implementation).

Interface: A blueprint of a class that can only contain abstract methods (in most traditional OOP languages)


C++ allows us to generate a special kind of virtual function called a pure virtual function that has no body at all
A pure virtual function simply acts as a placeholder that is meant to be redefined by derived classes. 

An abstract class in C++ is a class which contains at least one pure virtual function that is a virtual member 
function that has no implementation , which is declared by assigning 0 (=0) in declaration.
*/

#include<iostream>
using namespace std;
class shape{
  public:
  virtual void draw() = 0;
};
//You cannot create an object of abstract_class.
// Every derived class must implement draw().

class rectangle : public shape{
  public:
  void draw() override{
    cout<<"the rectangle is drawing"<<endl;
  }
};

class square : public shape{
  public:
  void draw() override{
    cout<<"the square is drawing"<<endl;
  }
};

class sphere : public shape{
  public:
  void draw() override{
    cout<<"the sphere is drawing"<<endl;
  }
};

int main(){
// shape *s1 = new shape(); // will throw error because shape is abstract class
shape *s2 = new rectangle();
s2->draw();
shape *s3 = new square();
s3->draw();
shape *s4 = new sphere();
s4->draw();

return 0;
}