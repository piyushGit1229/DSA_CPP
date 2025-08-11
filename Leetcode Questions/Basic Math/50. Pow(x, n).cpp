#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long binform = n;

        if (binform < 0) {
            x = 1 / x;
            binform = -binform;
        }

        while (binform > 0) {
            if (binform % 2 == 1) {
                ans = ans * x;
            }
            x = x * x;
            binform = binform / 2;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n;
    double x;
    cout << "Enter the number : ";
    cin >> x;
    cout << "Enter the power : ";
    cin >> n;

    double result = sol.myPow(x, n);
    cout << "Result is: " << result << endl;
    return 0;
}
