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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    sum = a[n / 2];
    // cout << sum << endl;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += abs(sum - a[i]);
    }
    cout << ans << endl;
}
