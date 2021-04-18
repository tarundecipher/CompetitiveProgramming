#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[(ll)1e5 + 5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        memset(memo, -1, sizeof(memo));
        ll n;
        cin >> n;
        ll c[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        ll a[n];
        ll b[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll ma = 0;

        for (int i = 0; i < n; i++)
        {
            if (i <= 0)
            {
                memo[i] = 0;
            }
            else
            {
                ll a1 = 0;
                ll a2 = 0;
                a1 = c[i] + 1 + abs(b[i] - a[i]);
                if (a[i] != b[i])
                {
                    a2 = c[i] + 1 + (memo[i - 1] - abs(b[i] - a[i]));
                }
                memo[i] = max(a1, a2);
                ma = max(memo[i], ma);
            }
        }

        cout << ma << endl;
    }
}
