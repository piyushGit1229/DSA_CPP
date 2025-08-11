#include <iostream>
using namespace std;


class Solution {
public:
    int hammingWeight(int n) {
      int ans = 0;
      while(n){
        if(n&1)
        {
            ans++;
        }
        n=n>>1;
     
      }
         return ans;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int reusult = sol.hammingWeight(n);
    cout << "Number of 1 bits: " << reusult << endl;
    return 0;

}