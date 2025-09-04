#include <bits/stdc++.h>
using namespace std;

vector<int> calculate_gcd(vector<int>& arr, int n) {
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        int g = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue; 
            g = __gcd(g, arr[j]);
        }
        result[i] = g;
    }
    return result;  // ✅ return the result
}

int main() {
    vector<int> arr = {12, 15, 18};
    int n = arr.size();

    vector<int> result = calculate_gcd(arr, n); // ✅ capture return

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Max GCD = " << *max_element(result.begin(), result.end()) << endl;


    return 0;
}
