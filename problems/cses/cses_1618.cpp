#include <bits/stdc++.h>
using namespace std;

/*
# Trailing Zeros

Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20! = 2432902008176640000 and it has 4 trailing zeros.

Input
The only input line has an integer n.

Output
Print the number of trailing zeros in n!.

Constraints
1 <= n <= 10^9

Example
Input:
20

Output:
4
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
/*
* Starting by listing the factorials from n=0 to n=15:
* 0:  0
* 1:  1
* 2:  2
* 3:  6
* 4:  24
* 5:  120
* 6:  720
* 7:  5040
* 8:  40320
* 9:  362880
* 10: 3628800
* 11: 39916800
* 12: 479001600
* 13: 6227020800
* 14: 87178291200
* 15: 1307674368000
*
* Notice:
* Let tr(n) denote the number of trailing zeros of the factorial of an integer n
*
* For a given tr(j), for all integers k >= j, tr(k) >= tr(j)
*
* It also appears to be the case that every 5 integers, tr(n) increases by 1
*
* So, you may think tr(n) = n // 5
*
* However, we know that every × 10 (i.e. 2 × 5) adds exactly one trailing zero. Every even number contributes at least
* one factor of 2 to n!, so the number if trailing zeros is limited by the number of 5s.
*
* Each multiple of 5 contributes at least one factor of 5 (5, 10, 15, ...), but powers of 5 contribute multiple:
*       25 = 5 × 5, 125 = 5 × 5 × 5, ...
*
* Thus, we count all powers of 5 which occur:
*       tr(n) = (floor)     n/5 + n/25 + n/125 + ...
*
* The loop:
*       for (int i = 5; i<=n; i*=5) res += n/i; // we can use integer division because n >= 0
* Each term adds the additional 5s contributed by multiples of a given power of 5.
*/
    int n, res=0;
    cin >> n;

    for (int i = 5; i<=n; i*=5) res += n/i;

    cout << res;

    return 0;
}
