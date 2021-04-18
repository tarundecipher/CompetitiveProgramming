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
        ll ma = 1e10 + 1;
        ll mi = -1e10 - 1;
        for (ll i = 0; i < n; i++)
        {
            char x;
            ll a;
            cin >> x >> a;
            if (x == 'L')
            {
                ma = min(ma, a);
            }
            else
            {
                mi = max(mi, a);
            }
        }
        ll ans = ma - mi - 1;
        if (ma == 1e10 + 1 || mi == -1e10 - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            if (ans > 0)
            {

                cout << ans << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
