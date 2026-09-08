#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long long x, y, k;

    cin >> t;

    while (t--)
    {
        cin >> x >> y >> k;

        long long sum = 0;

        //  in month i (0≤i<k), the company has x+i employees and needs to complete y+i projects.
        // each month, each employee is assigned floor(y+i / x+i) projects
        // monocarp completes (y+i) % (x+i) projects each month

        if (y == x)
        {
            cout << "0\n";
            continue;
        }

        long long d = y-x;
        long long max_i = min(k, max<long long>(0LL, d - x + 1));

        for (long long i=0; i<max_i; ++i)
        {
            sum += (d % (x+i));
        }

        sum += (k-max_i) * d;

        cout << sum << '\n';
    }

    return 0;
}