#include <bits/stdc++.h>
using namespace std;

/*
# Bit Strings

Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110,
and 111.

Input
The only input line has an integer n.

Output
Print the result modulo 10^9+7.

Constraints
1 <= n <= 10^6

Example
Input:
3

Output:
8
*/

#define M 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:

    // Note, 10^9 + 7 is a large *prime* number.

    long long n;
    cin >> n;

    /*
     * (2^n) % (10^9 + 7)
     *
     * Let M = 10^9 + 7
     *
     * (2^n) % M
     *
     * Let (a, b, ...) be the factors of 2^n
     *
     * (2^n) % M = ((a % M) (b % M) (c % M) ...) % M
    */

    long long ans = 1;

    for (int i=1; i<=n; i++)
    {
        ans = (ans * 2) % M;
    }

    cout << ans << "\n";

    return 0;
}
