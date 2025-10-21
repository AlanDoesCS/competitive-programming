#include <bits/stdc++.h>
using namespace std;

/*
# Increasing Array

You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at
least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1, x_2, ..., x_n: the contents of the array.

Output
Print the minimum number of moves.

Constraints
1 <= n <= 2 ⋅ 10^5
1 <= x_i <= 10^9

Example
Input:
5
3 2 5 1 7

Output:
5
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    int n;
    cin >> n;

    cin.ignore();
    string arr;
    getline(cin, arr);
    stringstream ss(arr);

    long long last, cur, moves=0;
    ss >> last;

    for (int i=2; i<=n; i++)
    {
        ss >> cur;
        moves += max(last-cur, 0ll);
        last = max(cur, last);
    }

    cout << moves;

    return 0;
}
