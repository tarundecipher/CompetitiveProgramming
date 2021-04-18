#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll m = 998244353;
    ll n;
    cin >> n;
    ll a[n], b[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] * (i + 1) * (n - i);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<ll>());
    ll res = 0;

    for (ll i = 0; i < n; i++)
    {
        a[i] = a[i] % m;
        res = (res % m + a[i] * b[i]) % m;
    }
    cout << res << endl;
}
