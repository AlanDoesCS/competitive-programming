#include <bits/stdc++.h>
using namespace std;

/*
# Repetitions

You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest
repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Constraints
1 <= n <= 10^6

Example
Input:
ATTCGGGA

Output:
3
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Start of solution:
    string seq;
    cin >> seq;

    int len=0, longest_len=1;
    char last=seq[0];

    for (auto it = seq.begin(); it != seq.end(); ++it)
    {
        if (*it == last)
        {
            len++;
        } else
        {
            if (len > longest_len) longest_len = len;
            len=1;
            last = *it;
        }
    }
    if (len > longest_len) longest_len = len;

    cout << longest_len;

    return 0;
}
