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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[n];
    partial_sum(a, a + n, b);
    for (ll i = 0; i < n; i++)
    {
        b[i] = (b[i] + (ll)1e10 * n) % n;
    }
    ll ans = 0;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        if (mp[b[i]])
        {
            ans += mp[b[i]];
        }
        if (b[i] == 0)
        {
            ans++;
        }
        mp[b[i]]++;
    }
    cout << ans << endl;
}
