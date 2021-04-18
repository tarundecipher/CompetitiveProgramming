#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = (ll)1e4;
ll t[4 * N];

ll memo[5001][5001];

ll clc(ll a[], ll l, ll m, ll n, ll k)
{
    if (k < 0)
    {
        return INT_MIN;
    }
    if (k == 0)
    {
        return 0;
    }

    if (l + m >= n && k == 0)
    {
        return 0;
    }
    if (l + m >= n && k > 0)
    {
        return INT_MIN;
    }
    if (memo[l][k] != -1)
    {
        return memo[l][k];
    }

    ll a1 = ((l == 0) ? t[l + m] : t[l + m] - t[l - 1]) + clc(a, l + m + 1, m, n, k - 1);
    ll a2 = clc(a, l + 1, m, n, k);
    memo[l][k] = max(a1, a2);
    return max(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(memo, -1, sizeof(memo));
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    t[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        t[i] = t[i - 1] + a[i];
    }
    cout << clc(a, 0, m - 1, n, k) << endl;
}
