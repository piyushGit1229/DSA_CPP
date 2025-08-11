#include<iostream>
using namespace std;
int productandsum(int n){
    int product =1;
    int sum = 0;
    while(n){
    n = n%10;
    product = product * n;
    sum = sum + n;
    n = n/10;
    }
    return product - sum;
}
int main(){
productandsum(234);
cout << "The difference between the product and sum of digits is: " << productandsum(234) << endl;
return 0;
}