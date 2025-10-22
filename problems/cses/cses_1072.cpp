#include <bits/stdc++.h>
using namespace std;

/*
# Two Knights

Your task is to count for k = 1, 2, ..., n the number of ways two knights can be placed on a k×k chessboard so that they
do not attack each other.

Input
The only input line contains an integer n.

Output
Print n integers: the results.

Constraints
1 <= n <= 10000

Example
Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    int k;
    cin >> k;

    for (long long i=1; i<=k; i++)
    {
        cout << (i*i*i*i -9*i*i + 24*i -16) / 2 << "\n";
    }

    return 0;
}
