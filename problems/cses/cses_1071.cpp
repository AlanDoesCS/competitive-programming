#include <bits/stdc++.h>
using namespace std;

/*
# Number Spiral

A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.

Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.

Output
For each test, print the number in row y and column x.

Constraints
1 <= t <= 10^5
1 <= y,x <= 10^9

Example
Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    int t;

    cin >> t;

    while (t--)
    {
        long long y, x;

        cin >> y >> x;

        const long long loop = max(y, x);
        const long long square = 1LL * loop * loop;

        // if even, the square occurs on the left, if odd, the square occurs on the right

        // find number of steps from square
        long long steps;
        if (loop % 2 == 0)
        {
            steps = (loop - y) + (x - 1);
        }
        else
        {
            steps = (y - 1) + (loop - x);
        }

        cout << square-steps << '\n';
    }

    return 0;
}
