#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[(ll)1e5 + 2][101];
const ll M = 1e9 + 7;

ll clc(ll a[], ll n, ll j, ll prev, ll m)
{
    if (j >= n)
    {
        return 1;
    }
    ll a1 = 0;
    if (a[j] != 0)
    {
        if (abs(prev - a[j]) > 1)
        {
            return 0;
        }
        else
        {
            (a1 += clc(a, n, j + 1, a[j], m)) %= M;
        }
    }
    if (dp[j][prev] != -1)
    {
        return dp[j][prev];
    }

    if (a[j] == 0)
    {
        (a1 += clc(a, n, j + 1, min(prev + 1, m), m)) %= M;
        if (min(prev + 1, m) != max(prev - 1, (ll)1))
        {
            (a1 += clc(a, n, j + 1, max(prev - 1, (ll)1), m)) %= M;
        }
        if (prev != min(prev + 1, m) && prev != max(prev - 1, (ll)1))
        {
            (a1 += clc(a, n, j + 1, prev, m)) %= M;
        }
    }
    dp[j][prev] = a1 % M;
    return a1;
}

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
    memset(dp, -1, sizeof(dp));
    ll x = clc(a, n, 1, a[0], m);
    if (a[0] == 0)
    {
        x = 0;
        for (ll i = 1; i <= m; i++)
        {

            (x += clc(a, n, 1, i, m)) %= M;
        }
        cout << x << endl;
    }
    else
    {
        cout << x << endl;
    }
}
