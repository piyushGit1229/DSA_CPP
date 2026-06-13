#include<iostream>
using namespace std;
/* Namespaces are basically used to prevent naming conflicts suppose two persons are using and 
asks to run the same varible or data member so namespace ensures that there are no naming conflicts 
and they work perfectly
*/
namespace A{
    int a = 10;
}

namespace B{
    int a = 20;
}

int main(){
cout<<"A" << A::a <<endl;
cout<<"B" << B::a <<endl;
return 0;
}