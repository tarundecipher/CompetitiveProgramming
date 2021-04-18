#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll clc(ll m, ll a[], ll n)
{

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {

        ans += m / a[i];

        // cout << ans << endl;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;
    ll a[n];
    ll ma = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }

    ll res;
    ll l = 1;
    ll r = ma * t + 1;
    while (l <= r)
    {
        ll m = l + (r - l) / 2;

        ll ans = clc(m, a, n);
        // cout << m << " " << ans << endl;
        if (ans < t)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
            res = m;
        }
    }
    cout << res << endl;
}
