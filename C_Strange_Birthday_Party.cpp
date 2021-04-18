#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[2000][2000];
ll clc(ll k, ll n, ll m, ll ass[], ll cost[], int j)
{
    if (k >= n)
    {
        return 0;
    }
    if (memo[k][j] != -1)
    {
        return memo[k][j];
    }
    ll a1 = INT_MAX;
    ll a2 = 0;
    if (j < m)
    {
        a1 = cost[j] + clc(k + 1, n, m, ass, cost, j + 1);
    }

    a2 = cost[ass[k] - 1] + clc(k + 1, n, m, ass, cost, j);
    memo[k][j] = min(a1, a2);
    return min(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ass[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ass[i];
        }
        ll cost[m + 1];
        memset(cost, 0, sizeof(cost));

        for (ll i = 0; i < m; i++)
        {
            cin >> cost[i];
        }
        memset(memo, -1, sizeof(memo));
        cout << clc(0, n, m, ass, cost, 0) << endl;
    }
}
