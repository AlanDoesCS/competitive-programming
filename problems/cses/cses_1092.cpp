#include <bits/stdc++.h>
using namespace std;

/*
# Two Sets

Your task is to divide the numbers 1, 2, ..., n into two sets of equal sum.

Input
The only input line contains an integer n.

Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. First, print the number of elements
in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1 <= n <= 10^6

Example 1
Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2
Input:
6

Output:
NO
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:

    /* Let T = 1 + 2 + 3 + ... + n,
     * S_1 + S_2 = T, where S_1, S_2 ∈ N
     *
     * Investigation:
     * Check which values it works for, for small n:
     * 1 ❌
     * 2 ❌
     * 3 ✅: {1, 2}, {3}
     * 4 ✅: {1, 4}, {2, 3} - Pairing the first and last elements, and then the middle two
     * 5 ❌
     *
     * Recognise that any integer n such that n % 4 == 0, it can be split up into these groups of 4 consecutive numbers
     * where the first and last numbers are added, and then middle two numbers are added.
     *
     * Hence, it is possible for any n > 0 such that n % 4 == 0.
     *
     * Additionally, if there is a remainder of 3, as 1 + 2 can be assigned to S_1, and 3 can be assigned to S_2, it is
     * also possible.
     *
     * Test:
     * 7 % 4 = 3
     * Let S_1 = 1 + 2 + 4 + 7 = 14,
     * S_2 = 3 + 5 + 6         = 14
     * ✅
     */

    int n;
    cin >> n;

    if (n % 4 == 0)
    {
        cout << "YES\n";
        // S_1
        cout << n / 2 << "\n";

        for (int i=1; i<n-4; i+=4) // increment in steps of 4 -- i is the first integer in the grouping
        {
            cout << i << ' ' << i+3 << ' ';
        }
        cout << n-3 << ' ' << n << "\n";

        // S_2
        cout << n / 2 << "\n";
        for (int i=1; i<n-4; i+=4)
        {
            cout << i+1 << ' ' << i+2 << ' ';
        }
        cout << n-2 << ' ' << n-1 << "\n";

    } else if (n % 4 == 3)
    {
        cout << "YES\n";
        // S_1
        cout << (n-3) / 2 + 2 << "\n" << "1 2 ";

        for (int i=4; i<n-4; i+=4) // same as before, just start at an offset of 3
        {
            cout << i << ' ' << i+3 << ' ';
        }
        if (n != 3) cout << n-3 << ' ' << n;
        cout << '\n';

        // S_2
        cout << (n-3) / 2 + 1 << "\n" << "3 ";
        for (int i=4; i<n-4; i+=4) // same as before, just start at an offset of 3
        {
            cout << i+1 << ' ' << i+2 << ' ';
        }
        if (n != 3)  cout << n-2 << ' ' << n-1;
        cout << "\n";

    } else cout << "NO\n";

    return 0;
}
