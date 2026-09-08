#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, k=0, j=0;
    cin >> n >> m >> a >> b;

    if (b < a*m)
    {
        j = n/m;
        if ((n%m)*a < b)
        {
            k=n%m;
        } else ++j;
    } else
    {
        k=n;
    }

    cout << k*a + j*b;

    return 0;
}