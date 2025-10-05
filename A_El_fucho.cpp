#include <bits/stdc++.h>
using namespace std;

#define turbo ios::sync_with_stdio(false); cin.tie(nullptr);

void pyx_core() {
    long long omega;
    if (!(cin >> omega)) return;

    long long zeta = 0;
    for (long long i = 1; i < omega; ++i)
        zeta += 2;

    cout << zeta << '\n';
}

int main() {
    turbo
    int phi;
    if (!(cin >> phi)) return 0;

    while (phi--) pyx_core();

    return 0;
}
