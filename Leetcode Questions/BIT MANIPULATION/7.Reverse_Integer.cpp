#include<iostream>
using namespace std;
class solution{
    public:
     int reverse(int x){
        int ans =0;
        while(x!=0){
            int digit = x%10;
            ans = ans * 10 + digit;
            x=x/10;
        }
        return ans;
    }
};
int main(){
solution sol;
int x;
cout << "Enter an integer: ";
cin >> x;
int result = sol.reverse(x);
cout << "Reversed integer: " << result << endl; 
return 0;
}