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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll diff = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            diff += abs(a[i] - a[n - 1]);
        }
        ll diff2 = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            diff2 += abs(a[i] - a[n - 2]);
        }
        ll ans = 0;
        for (ll j = 0; j < n - 1; j++)
        {
            ll diff1 = 0;
            ll res1 = 0;
            diff1 = diff - abs(a[0] - a[n - 1]);
            if (diff1 > a[0])
            {
                res1 = diff1 - a[0];
            }
            else if (a[0] > diff1)
            {
                ll res = a[0] - diff1;

                res1 = res % (n - 1);

                // cout << 0 << endl;
            }
            else
            {
                res1 = 0;
            }
            ans = max(ans, res1);
        }

        ll res1 = 0;

        if (diff2 > a[n - 1])
        {
            res1 = diff2 - a[n - 1];
        }
        else if (a[n - 1] > diff2)
        {
            ll res = a[n - 1] - diff2;

            res1 = res % (n - 1);

            // cout << 0 << endl;
        }
        else
        {
            res1 = 0;
        }
        ans = max(ans, res1);
        cout << ans << endl;
    }
}