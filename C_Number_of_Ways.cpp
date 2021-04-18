#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll a[n];
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        res += a[i];
    }
    if (res % 3 == 0)
    {
        res = res / 3;
        res = 2 * res;

        map<ll, ll> mp;
        ll sum = 0;
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            sum += a[i];
            if (sum == res)
            {
                ans += mp[res / 2];
            }

            mp[sum]++;
        }
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
