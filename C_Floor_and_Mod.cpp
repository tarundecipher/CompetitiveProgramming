#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll c = 0;

        for (ll r = 1; r * r <= x; r++)
        {
            ll l = r;
            ll ri = y;
            ll temp = 0;
            while (l <= ri)
            {
                ll m = l + (ri - l) / 2;
                if (x >= r * (m + 1))
                {
                    temp = m;
                    l = m + 1;
                }
                else
                {
                    ri = m - 1;
                }
            }
            if (temp != 0)
            {
                c += temp - r;
            }
            // for (ll b = r; b <= y; b++)
            // {
            //     if (x >= r * (b + 1) && b > r)
            //     {
            //         // cout << r << " " << (b + 1) << endl;
            //         c++;
            //     }
            //     // else
            //     // {
            //     //     break;
            //     // }
            // }
        }
        cout << c << endl;
    }
}
