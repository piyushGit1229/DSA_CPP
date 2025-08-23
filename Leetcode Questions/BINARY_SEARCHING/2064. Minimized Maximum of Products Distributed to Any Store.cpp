/*
2064. Minimized Maximum of Products Distributed to Any Store
------------------------------------------------------------
You are given an integer n (the number of stores) and an array quantities 
where quantities[i] represents the number of products of the i-th type.

Rules:
1. Each store can only receive products of a single type.
2. Products of the same type can be distributed across multiple stores.
3. All products must be distributed.

Goal:
Distribute products across n stores so that the maximum number of products
any store receives is minimized. Return this minimized maximum.

Example 1:
Input: n = 6, quantities = [11, 6]
Output: 3
Explanation: 
- Split 11 into [2, 2, 2, 2, 3]
- Split 6  into [2, 2, 2]
The maximum per store = 3.

Example 2:
Input: n = 7, quantities = [15, 10, 10]
Output: 5

Constraints:
- 1 <= n <= 10^5
- 1 <= quantities.length <= n
- 1 <= quantities[i] <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function: check if we can distribute products such that
    // no store has more than 'checker' items.
    bool checkDistribute(vector<int>& quantities, int checker, int n) {
        int sum = 0;
        for (int i = 0; i < quantities.size(); i++) {
            sum += ceil((double)quantities[i] / checker);
            if (sum > n) {
                return false; // Too many stores needed
            }
        }
        return true; // Distribution possible within n stores
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int start = 1;
        int end = *max_element(quantities.begin(), quantities.end());

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (checkDistribute(quantities, mid, n)) {
                end = mid - 1;   // Try smaller maximum
            } else {
                start = mid + 1; // Need larger maximum
            }
        }
        return start;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> quantities1 = {11, 6};
    int n1 = 6;
    cout << "Output: " << sol.minimizedMaximum(n1, quantities1) << endl; // Expected: 3

    vector<int> quantities2 = {15, 10, 10};
    int n2 = 7;
    cout << "Output: " << sol.minimizedMaximum(n2, quantities2) << endl; // Expected: 5

    return 0;
}
