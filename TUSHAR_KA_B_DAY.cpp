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
        map<ll, ll> mp;

        ll res = 0;
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            x = x ^ a[i];
            if (x % 2 == 0)
            {
                x = 0;
            }
            else
            {
                x = 1;
            }
            if (mp[x ^ 0] || x == 0)
            {
                res += mp[x ^ 0];
                if (x == 0)
                {
                    res++;
                }
            }
            mp[x]++;
        }

        cout << res << endl;
    }
}
