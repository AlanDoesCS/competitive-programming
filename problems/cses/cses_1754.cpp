#include <bits/stdc++.h>
using namespace std;

/*
# Coin Piles

You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and
two coins from the right pile, or two coins from the left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.

Input
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1 <= t <= 10^5
0 <= a, b <= 10^9

Example
Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    /*
     * We start by examining a few situations to better understand the problem:
     *
     * Note that for any a, b, if their values are swapped, the result is the same. Hence we let a <= b
     * a = 1, b = 2 -> Yes
     * a = 2, b = 2 -> No
     * a = 3, b = 3 -> Yes
     * a = 6, b = 6 -> Yes -> all a==b, a % 3 == 0 are solvable
     *
     * a = 2, b = 4 -> Yes -> all 2a==b (or vice versa), are solvable
     *
     * Hence we can partition any a and b such that:
     *      a = k + r, b = k + 2r, k % 3 == 0, where k, r are integers
     *
     * Thus
     *      b - a = (k + 2r) - (k + r) = r
     *
     * Recall that
     *      k = a - r
     *
     * So
     *      k = a - (b - a) = 2a - b
    */

    int t, a, b;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> a >> b;

        const int lo = min(a, b);
        const int hi = max(a, b);

        const int k = 2*lo - hi;

        cout << ((k % 3 == 0) && (k >= 0) ? "YES\n" : "NO\n");
    }

    return 0;
}
