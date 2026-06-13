// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;
//     int uid;
//     //default constructor

//     //   Student(){

//     // }

//     //parameterized constructor

//     // Student(string n,int a,int u){
//     //     name = n;
//     //     age = a;
//     //     uid = u;
//     // }
// };

// int main()
// {
//     // Student s("piyush",20,1234); //// Parameterized Constructor


//     //default object creation 
//     //Default Constructor
//     // Stack Memory
//     // Destructor automatically called when scope ends

//     Student s;
//     s.name = "Rahul";
//     s.age = 20;
//     s.uid = 1234;
//     cout << s.name << " " << s.age << " " << s.uid << endl;
//     return 0;
// }



//Dynamic memory allocation of objects using heaps

/*
    Dynamic allocation requests memory from the system heap at runtime. 
    You must access these objects via pointers using the new keyword.
*/

#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    int uid;

    student(){
        name = "piyush";
        age = 20;
        uid = 1234;
    }
};
int main(){
student *s = new student();
// s->name = "piyush";
// s->age = 20;
// s->uid = 1234;
cout<<s->name<<" "<<s->age<<" "<<s->uid<<endl;
return 0;
}