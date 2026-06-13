/*
Polymorphism in C++ is a core object-oriented programming concept that allows a single function name, operator,
 or interface to behave differently depending on the context or data type invoking it. Derived from the Greek words 
 poly (many) and morph (form), it essentially means "many forms"
*/

/*
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"Generic drawing";
    }
    //we  use virtual here because we want to override this function in the derived class
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"Square drawing";
    }
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Circle drawing";
    }
};

int main(){
Shape *s = new Square();
s->draw();

Shape *c = new Circle();
c->draw();

//here we can see the same function is getting overriden in the derived class and it is called polymorphism
return 0;
}

/*

polymorphism are of 2 types
1. compile time polymorphism
2. run time polymorphism

in compile time comes in the form of function overloading and operator overloading which is resolved at compile time

in run time comes in the form of virtual functions and method overriding which is resolved at runtime

*/

// Compile time polymorphism

//Method overloading

/*

#include<iostream>
using namespace std;

class calculate{
    public:
    int calc(int a1,int b1){
        return a1+b1;
    }
    int calc(int a1,int b1,int c1){
        return a1+b1+c1;
    }
    //same function name but different parameters we can also change the return type for example we can change int to double
};
int main(){
calculate *c = new calculate();

cout<<c->calc(1,2)<<endl;
cout<<c->calc(1,2,3)<<endl;

return 0;
}

*/

//OPerator overloading definition

//Operator overloading is a way to define the behavior of specific operators for user-defined classes.
//It allows you to define how operators work for objects of your class, rather than for built-in types.
//Operator overloading allows you to redefine how standard operators (like +, -, or ==) behave when used with custom
//  classes or user-defined data types.

// code example for operator overloading

//Method overrriding definition

//Method overriding is a feature in object-oriented programming that allows a derived class to provide a different
// implementation of a method that is already defined in a base class.

// code example for method overriding

#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"Generic drawing";
    }
    //we  use virtual here because we want to override this function in the derived class
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"Square drawing";
    }
};

int main(){
Shape *s = new Square();
s->draw();
return 0;
}