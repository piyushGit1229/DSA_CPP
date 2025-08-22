#include <bits/stdc++.h>
using namespace std;

// Function to compute sum of digits of a single number
long long digitSum(long long n) {
    long long sum = 0;
    while (n) { sum += n % 10; n /= 10; }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;

        long long sum = 0;
        long long len = 1, start = 1, rem = k;

        while (rem > 0) {
            long long count = 9 * start;         // Numbers with current digit length
            long long digits_in_block = count * len;

            if (rem >= digits_in_block) {
                // Full block: sum digits for 1-digit, 2-digit, etc.
                for (long long i = start; i < start + count; i++)
                    sum += digitSum(i);
                rem -= digits_in_block;
            } else {
                // Partial block
                long long full_numbers = rem / len;
                long long extra_digits = rem % len;

                for (long long i = 0; i < full_numbers; i++)
                    sum += digitSum(start + i);

                if (extra_digits > 0) {
                    string s = to_string(start + full_numbers);
                    for (int i = 0; i < extra_digits; i++)
                        sum += s[i] - '0';
                }
                rem = 0;
            }

            start *= 10;
            len++;
        }

        cout << sum << "\n";
    }

    return 0;
}
