#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[101][100001];

ll clc(ll a[][2], ll k, ll n, ll w)
{
    if (k >= n)
    {
        if (w == 0)
        {

            return 0;
        }
        else
        {

            return INT_MAX;
        }
    }
    if (memo[k][w] != -1)
    {
        return memo[k][w];
    }
    ll a1 = INT_MAX;
    ll a2 = INT_MAX;
    if (w - a[k][1] >= 0)
    {
        a1 = a[k][0] + clc(a, k + 1, n, w - a[k][1]);
    }
    a2 = clc(a, k + 1, n, w);
    memo[k][w] = min(a1, a2);
    return min(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, w;
    cin >> n >> w;
    ll a[n][2];

    ll ma = 0;
    for (ll i = 0; i < n; i++)
    {
        ll we, va;
        cin >> we >> va;
        a[i][0] = we;
        a[i][1] = va;
        ma += a[i][1];
    }
    ll ans = INT_MIN;
    memset(memo, -1, sizeof(memo));
    for (int j = ma; j >= 0; j--)
    {

        int p = clc(a, 0, n, j);
        if (p <= w && p >= 0)
        {
            ans = j;
            break;
        }
    }

    cout << ans << endl;
    // cout << clc(a, 0, n, 139) << endl;
}
