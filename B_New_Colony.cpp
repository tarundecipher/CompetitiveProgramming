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
        ll res = 0;
        for (ll j = 0; j < k; j++)
        {
            bool cond = false;
            for (ll i = 0; i < n - 1; i++)
            {
                if (a[i] < a[i + 1])
                {
                    cond = true;
                    res = i + 1;
                    a[i]++;
                    break;
                }
            }
            if (!cond)
            {
                res = -1;
                break;
            }
        }
        cout << res << endl;
    }
}
