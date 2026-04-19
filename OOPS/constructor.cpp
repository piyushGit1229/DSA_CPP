// #include <iostream>
// using namespace std;

// class a
// {
// public:
//     int b;
//     a()
//     {
//         cout << "Default constructor called" << endl;
//     }

//     a(int x)
//     {
//        this-> b = x;
//        cout<<"Parameterized constructor called"<<endl;
//     }

//     ~a()
//     {
//         cout << "Destructor called" << endl;
//     }
// };
// int main()
// {
//     a o(10);
//     cout<<o.b;
//     return 0;
// }

//this keywords use -> referes to the current instance of the class and to differentiate between 
// the objects in the memory and resolves ambiguity also


#include<iostream>
using namespace std;

class a{
    public: 
    void show(){
        cout<<this<<endl;
    }
};
int main(){
a o;
a o2;
o.show();
o2.show();
return 0;
}