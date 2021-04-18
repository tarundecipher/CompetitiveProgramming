#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// ll memo[200007];

// ll clc(ll a[], ll k, ll n, bool cond)
// {
//     if (k >= n)
//     {
//         return 0;
//     }
//     if (memo[k] != 0)
//     {
//         return memo[k];
//     }
//     ll a1 = 0;
//     ll a2 = 0;
//     if (cond == true)
//     {
//         a1 = a[k] + clc(a, k + a[k], n, false);
//         a2 = clc(a, k + 1, n, true);
//     }
//     else
//     {
//         a1 = a[k] + clc(a, k + a[k], n, false);
//     }
//     memo[k] = max(a1, a2);
//     return max(a1, a2);
// }

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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b[n];
        memset(b, 0, sizeof(b));
        ll ma = INT_MIN;
        for (ll i = n - 1; i >= 0; i--)
        {
            ll p = i;
            ll sum = 0;
            while (p < n)
            {
                if (b[p] == 0)
                {
                    sum += a[p];
                    p += a[p];
                }
                else
                {
                    sum += b[p];
                    break;
                }
            }
            b[i] = sum;
            ma = max(ma, b[i]);
        }
        cout << ma << endl;
    }
}
