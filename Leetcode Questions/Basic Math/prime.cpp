
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  // 0 and 1 are not prime
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 3;
    if (isPrime(n)) {
        cout << "Prime number";
    } else {
        cout << "Not prime";
    }
    return 0;
}
