#include<iostream>
using namespace std;
class student{
    public:
    int age;
    string name;

    //constructor
    student(string n , int a){
        name = n;
        age = a;
    }

    void display(){
        cout<<name<<" "<<age<<" ";
    }
};
int main(){
student s1("piyush" , 20);
// s1.name = "piyush";
// s1.age = 20;
s1.display();

return 0;
}