#include<iostream>
#include <algorithm>
using namespace std;
class Solution{ 
    public:
    string binary(int n){
    if(n == 0) return "0"; // Handle the case for 0
    string res =" ";
    while(n>0){
        res =(n%2 == 0? "0" + res : "1" + res);
        n = n / 2; // Divide by 2 to get the next bit
    }
        reverse(res.begin(), res.end());  // correct order
        return res;
    }
};

int main(){
Solution sol;
int n;
cout << "Enter an integer: ";
cin >> n;
string result = sol.binary(n);
cout << "Binary representation: " << result << endl;
return 0;
}