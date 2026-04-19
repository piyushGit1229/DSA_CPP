// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     virtual void draw(){
//         cout<<"Base class draw function is drawing";
//     }
// };

// class square : public shape{
//     public:
//     void draw(){
//         cout<<"Derived class drawing";
//     }
// };
// int main(){
// shape* s = new square();
//  // yha problem ye h ab ki jb hum square ka objecrt create krk draw clal kr
// //  rhe h phir v wo base ka draw implement kr rha h
// ///to yha virtual function use hoga jisse hum override krnge
// s->draw();
// }

// #include<iostream>
// using namespace std;

// class calculate{
//     public:
//     int add(int a,int b){
//         return a+b;
//     }
//     double add(double a ,double b){
//         return a+b;
//     }
// };

// int main(){
// calculate c;
// cout<<c.add(1,2);
// cout<<c.add(1.5,2.5); //this is a example of compile time polymorphism because we know it at the compile time
// // function ovloading

// //function overriding known at runtime

// return 0;
// }

// function overriding -> decided at runtime

#include<iostream>
using namespace std;


class shape{
public:
    virtual void draw()
    {
        cout<< "base class drawing";
    }
};

class circle : public shape{
    public:

    void draw(){
        cout<<"Dervied class drawing";
    }
};
int main(){
shape* s = new circle();
s->draw();
return 0;
}
