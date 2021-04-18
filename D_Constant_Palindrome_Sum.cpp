#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll pre[(ll)4e5 + 5];
ll p[(ll)4e5 + 5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<ll, ll> mp;

        for (ll i = 0; i < n / 2; i++)
        {
            ll l = min(a[i], a[n - i - 1]) + 1;
            ll r = max(a[i], a[n - i - 1]) + k;

            mp[a[i] + a[n - i - 1]]++;
            pre[l]++;
            pre[r + 1]--;
        }

        ll ans = INT_MAX;
        p[0] = pre[0];
        for (ll i = 1; i <= 2 * k; i++)
        {
            p[i] = p[i - 1] + pre[i];
        }

        for (ll x = 2; x <= 2 * k; x++)
        {

            ll c = p[x] - mp[x] + ((n / 2) - p[x]) * 2;
            ans = min(ans, c);
        }

        cout << ans << endl;
    }
}
