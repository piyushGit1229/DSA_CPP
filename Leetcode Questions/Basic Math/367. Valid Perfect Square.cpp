#include <bits/stdc++.h> 
bool isPerfectSquare(long long n) {
	// Write your code here.
 long long left = 1, right = n;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long sq = mid * mid;
        if (sq == n) return true;
        else if (sq < n) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}