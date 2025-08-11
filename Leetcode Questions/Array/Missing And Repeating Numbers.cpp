#include <vector>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    // Let:
    // x = repeating number
    // y = missing number
    // Given equations:
    // 1. x - y = s - sn      (difference in actual sum and expected sum)
    // 2. x^2 - y^2 = s2 - s2n (difference in square sums)

    long long n = a.size();

    // Expected sum of first n natural numbers: sn = n*(n+1)/2
    long long sn = (n * (n + 1)) / 2;

    // Expected sum of squares of first n natural numbers: s2n = n*(n+1)*(2n+1)/6
    long long s2n = (n * (n + 1) * (2 * n + 1)) / 6;

    long long s = 0;   // Actual sum of array elements
    long long s2 = 0;  // Actual sum of squares of array elements

    // Calculate actual sum and actual square sum
    for (int i = 0; i < n; i++) {
        s = s + a[i];             // Sum of elements
        s2 = s2 + (long long)a[i] * a[i];  // Sum of squares (cast to avoid overflow)
    }

    // Equation (1): x - y = s - sn
    long long val1 = s - sn;

    // Equation (2): x^2 - y^2 = s2 - s2n
    long long val2 = s2 - s2n;

    // From identity: x^2 - y^2 = (x - y)(x + y)
    // => x + y = (x^2 - y^2) / (x - y)
    val2 = val2 / val1;

    // Now we have:
    // x - y = val1
    // x + y = val2

    // Solving the two equations:
    // Adding both: (x - y + x + y) = val1 + val2 => 2x = val1 + val2 => x = (val1 + val2)/2
    long long x = (val1 + val2) / 2;

    // Subtracting: y = x - val1
    long long y = x - val1;

    // Return in the form [repeating, missing]
    return { (int)x, (int)y };
}
