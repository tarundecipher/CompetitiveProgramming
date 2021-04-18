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
    ll ma = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }

    ll z = ma - a[0];
    ll total = 0;
    total += z;

    for (ll i = 1; i < n; i++)
    {
        total += ma - a[i];
        if (ma - a[i] != 0)
        {
            z = __gcd(z, ma - a[i]);
        }
    }
    ll y = total / z;
    cout << y << " " << z << endl;
}
