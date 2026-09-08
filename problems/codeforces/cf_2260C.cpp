#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, y, steps;

    cin >> t;

    while (t--)
    {
        cin >> x >> y;

        int sum = x+y;
        int a = 0;

        int mask_bit = 1 << 30;
        while (mask_bit)
        {
            mask_bit >>= 1;
            if (mask_bit > x) continue;
            if ((mask_bit & sum) && ((a | mask_bit) <= x)) a |= mask_bit;
        }

        cout << sum << ' ' << x-a << '\n';
    }

    return 0;
}