#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a;
    cin >> t;

    bool first_easy, last_easy;

    while (t--)
    {
        cin >> n;
        int mid_easy_count = 0;

        cin >> a;
        first_easy = a==0;

        for (int i=1; i<n-1; ++i)
        {
            cin >> a;
            if (a==0) ++mid_easy_count;
        }
        cin >> a;
        last_easy = a==0;

        if (first_easy && last_easy)
        {
            cout << 0 << '\n';
            continue;
        }

        if (first_easy)
        {
            cout << ((mid_easy_count > 0) ? 1 : -1) << '\n';
            continue;
        }

        if (last_easy)
        {
            cout << ((mid_easy_count > 0) ? 1 : -1) << '\n';
            continue;
        }

        cout << ((mid_easy_count > 1) ? 2 : -1) << '\n';
    }

    return 0;
}