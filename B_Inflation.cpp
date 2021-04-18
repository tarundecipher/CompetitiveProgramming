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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll den = a[0];
        ll sum = 0;
        for (ll i = 1; i < n; i++)
        {
            // cout << 100 * a[i] << " " << den * k << endl;
            ll l = 0;
            if (100 * a[i] > den * k)
            {
                l = ceil((double)(100 * a[i]) / (double)k) - (den);
                sum += l;
            }
            den += a[i] + l;
        }
        cout << sum << endl;
    }
}
