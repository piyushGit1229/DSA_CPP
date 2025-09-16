#include<bits/stdc++.h>
#include <numeric>
using namespace std;
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> result;
        for (int x : nums) {
            result.push_back(x);
            while (result.size() > 1) {
                int a = result.back(); // 6 4 a=6
                result.pop_back();

                int b = result.back(); // b=6
                result.pop_back();

                int gcd_val = gcd(a, b);

                if (gcd_val > 1) {
                    long long l = lcm(a, b);
                    result.push_back(l);
                } else {
                    result.push_back(b);
                    result.push_back(a);
                    break;
                }
            }
        }

         return vector<int>(result.begin(), result.end());;
    }
};

int main(){

return 0;
}