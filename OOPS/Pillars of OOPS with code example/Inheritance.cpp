// SINGLE INHERITANCE

// #include<iostream>
// using namespace std;
// class animal{
//      public:
//      void bark(){
//         cout<<" barking";
//      }
// };

// class dog : public animal{
//     public:
//     void eat(){
//          cout<<" eats";
//     }
// };
// int main(){
// dog *d = new dog();
// d->bark();
// d->eat();
// return 0;
// }

// Multiple Inheritance: Multiple inheritance allows a derived class to inherit from multiple base classes.
// #include<bits/stdc++.h>
// using namespace std;

// class Base1{
//      public:
//      void f1(){
//           cout<<"Base 1 class";
//      }
// };

// class Base2{
//      public:
//      void f2(){
//           cout<<"Base 2 class";
//      }
// };

// class Derived : public Base1 , public Base2{
//      public:
//      void f3(){
//           cout<<"Derived class";
//      }
// };

// int main(){
//      Derived *d = new Derived();
//      d -> f3();
//      d -> f2();
//      d -> f1();
//      return 0;
// }

/* Multilevel Inheritance: Multilevel inheritance involves deriving a class from another derived class.
This creates a hierarchy of classes, with each class inheriting from its immediate superclass.
*/

/*

#include <bits/stdc++.h>
using namespace std;

class Base1{
     public:
     void base1(){
          cout<<"Base 1 class";
     }
};

class Derived1 : public Base1{
     public:
     void derived1(){
          cout<<"Derived 1 class";
     }
};

class Derived2 : public Derived1{
     public:
     void derived2(){
          cout<<"Derived 2 class";
     }
};
int main(){
     Derived2 *d = new Derived2();
     d -> derived2();
     d -> derived1();
     d -> base1();
     return 0;
}

*/

// Hierarchical Inheritance: Hierarchical inheritance involves multiple derived classes inheriting from a single base class.'
// This type of inheritance allows the base class to serve as a common interface

/*

#include<iostream>
using namespace std;
class Base{
     public:
     void base(){
          cout<<"Single Base class"<<endl;
     }
};

class Derived1 : public  Base{
     public:
     void derived1(){
          cout<<"Derived 1 class"<<endl;
     }
};

class Derived2 : public  Base{
     public:
     void derived2(){
          cout<<"Derived 2 class"<<endl;
     }
};

int main(){
     Derived1 *d1 = new Derived1();
     d1 -> derived1();
     d1 -> base();
     Derived2 *d2 = new Derived2();
     d2 -> derived2();
     d2 -> base();
     return 0;
}
*/

/*
Hybrid Inheritance: Hybrid inheritance is a combination of multiple and single inheritance.
Hybrid inheritance is a combination of multiple inheritance types. The most common example is the diamond
inheritance structure where two classes inherit from the same base class and another class inherits from both of them.
In such cases, the derived class gets multiple copies of the common base class, leading to ambiguity.
This is known as the Diamond Problem.
We solve it using virtual inheritance by declaring the intermediate classes as virtual inheritors of the base class.
This ensures that only one shared copy of the base class exists, eliminating ambiguity and reducing memory overhead.
*/

// #include<iostream>
// using namespace std;
// class Base1{
//      public:
//      void base1(){
//           cout<<"Base 1 class"<<endl;
//      }
// };

// class Derived1 : virtual public Base1{
//      public:
//      void Dervived1(){
//           cout<<"Single Derived1 class"<<endl;
//      }
// };

// class Derived2 : virtual public Base1{
//      public:
//      void Dervived2(){
//           cout<<"Single Derived2 class"<<endl;
//      }
// };

// class Derived3 : public Derived1 , public Derived2{
//      public:
//      void Dervived3(){
//           cout<<"Single Derived3 class"<<endl;
//      }
// };
// int main(){
// Derived3 *d3 = new Derived3();
// d3 -> Dervived3();
// d3 -> Dervived1();
// d3 -> Dervived2();
// d3 -> base1();
// return 0;
// }

// INTERVIEW EXAMPLE Of Inheritance

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    double salary;
    Employee(string n, double s)
    {
        name = n;
        salary = s;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee{
public:
Developer(string n,double s) : Employee(n,s) {}
void displayInfo(){ 
    Employee::displayInfo();  //Don't look in the current class. Go to this specific class
    cout<<"Developer"<<endl;
}

// The scope resolution operator is used to explicitly call the parent class version of a function. It is commonly used
//  when a derived class overrides a method but still wants to reuse the base class implementation before adding its own
//   functionality. This avoids code duplication and supports code reuse.

void cancode(){
    cout<<"I can code"<<endl;
}
};

class Manager : public Employee{
public:
Manager(string n,double s) : Employee(n,s) {}
void displayInfo(){
    Employee::displayInfo();
    cout<<"Manager"<<endl;
}
void manage(){
    cout<<"I can manage"<<endl;
}
};
int main()
{
    Developer dev("John", 50000);
    Manager mgr("Alice", 80000);
    dev.displayInfo();
    dev.cancode();
    mgr.displayInfo();
    mgr.manage();
    return 0;
}