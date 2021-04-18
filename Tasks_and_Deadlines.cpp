#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    for (ll i = 0; i < n; i++)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        a[i].first = t1;
        a[i].second = t2;
    }
    sort(a, a + n);
    ll ans = 0;
    ll time = 0;
    for (ll i = 0; i < n; i++)
    {
        time += a[i].first;
        ans += a[i].second - time;
    }
    cout << ans << endl;
}
