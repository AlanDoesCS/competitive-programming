#include <bits/stdc++.h>
using namespace std;

/*
# Permutations

A permutation of integers 1, 2, ..., n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.

Output
Print a beautiful permutation of integers 1, 2, ..., n. If there are several solutions, you may print any of them. If
there are no solutions, print "NO SOLUTION".

Constraints
1 <= n <= 10^6

Example 1
Input:
5

Output:
4 2 5 3 1

Example 2
Input:
3

Output:
NO SOLUTION
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1";
        return 0;
    }

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    int c=2;
    for (int i=1; i<=n; i++)
    {
        cout << c << " ";
        c = (c+2 > n) ? 1 : c+2;
    }

    return 0;
}
