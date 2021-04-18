#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[101][100001];

// ll clc(ll a[][2], ll k, ll n, ll w)
// {
//     if (k >= n)
//     {
//         return 0;
//     }
//     if (memo[k][w] != -1)
//     {
//         return memo[k][w];
//     }
//     ll a1 = 0;
//     ll a2 = 0;
//     if (w - a[k][0] >= 0)
//     {
//         a1 = a[k][1] + clc(a, k + 1, n, w - a[k][0]);
//     }
//     a2 = clc(a, k + 1, n, w);
//     memo[k][w] = max(a1, a2);
//     return max(a1, a2);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, w;
    cin >> n >> w;
    ll a[n][2];
    memset(memo, -1, sizeof(memo));
    for (ll i = 0; i < n; i++)
    {
        ll we, va;
        cin >> we >> va;
        a[i][0] = we;
        a[i][1] = va;
    }
    // cout << clc(a, 0, n, w) << endl;
    for (ll k = n; k >= 0; k--)
    {
        for (ll wt = 0; wt <= w; wt++)
        {
            if (k == n)
            {
                memo[k][wt] = 0;
            }
            else
            {
                ll a1 = 0;
                ll a2 = 0;
                if (wt - a[k][0] >= 0)
                {
                    a1 = a[k][1] + memo[k + 1][wt - a[k][0]];
                }
                a2 = memo[k + 1][wt];
                memo[k][wt] = max(a1, a2);
            }
        }
    }
    cout << memo[0][w] << endl;
}
