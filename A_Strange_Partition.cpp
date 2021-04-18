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
        ll n, x;
        cin >> n >> x;
        ll a[n];
        ll sum = 0;
        ll res1 = 0;
        ll res2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            res1 += ceil((double)a[i] / (double)x);
            sum += a[i];
        }
        res2 = ceil((double)sum / (double)x);
        cout << res2 << " " << res1 << endl;
    }
}
