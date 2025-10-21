#include <bits/stdc++.h>
using namespace std;

/*
# Missing Number

You are given all numbers between 1, 2, ..., n except one. Your task is to find the missing number.

Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
Print the missing number.

Constraints
2 <= n <= 2 ⋅ 10^5

Example
Input:
5
2 3 1 5

Output:
4
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    int n;
    cin >> n;

    cin.ignore();
    string input;
    getline(cin, input);
    stringstream ss(input);

    int residual = n, num;

    for (int i=1; i<n; i++)
    {
        ss >> num;
        residual = residual ^ i ^ num; // cheeky abuse of boolean algebra
    }

    cout << residual;

    return 0;
}
