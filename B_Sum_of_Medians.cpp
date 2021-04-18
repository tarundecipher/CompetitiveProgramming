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
        ll n, k;
        cin >> n >> k;
        ll a[n * k];
        ll len = n * k;
        for (ll i = 0; i < len; i++)
        {
            cin >> a[i];
            // cout << a[i];
        }
        ll ans = 0;
        ll pos = ceil((double)n / (double)2);

        ll t1 = k;
        for (ll i = len - 1 - (n - pos); i >= 0; i -= (n - pos + 1))
        {
            if (t1 == 0)
            {
                break;
            }
            t1--;
            ans += a[i];
            // cout << a[i] << endl;
        }
        cout << ans << endl;
    }
}
