#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (n > 1)
    {
        ll res = a[1] - a[0];
        for (ll i = 1; i < n; i++)
        {
            res = __gcd(res, a[i] - a[i - 1]);
        }

        ll b[m];
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cout << __gcd(res, b[i] + a[0]) << " ";
        }

        cout << endl;
    }
    else
    {
        ll b[m];

        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cout << b[i] + a[0] << " ";
        }
    }
}
