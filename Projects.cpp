#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct data
{
    ll start, end, cost;
};

bool cond(data d1, data d2)
{
    return (d1.end < d2.end);
}
ll dp[(ll)2e5 + 5];
ll clc(data a[], ll i, ll n)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    ll ma = 0;
    ll l = i - 1;
    ll r = n - 1;
    ll ans = -1;
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (a[m].start > a[i].end)
        {
            ans = m;

            r = m - 1;
        }
        else if (a[m].start <= a[i].end)
        {
            l = m + 1;
        }
    }

    if (ans != -1)
    {
        ma = max(ma, a[ans].cost + clc(a, ans, n));
    }
    // for (ll j = i + 1; j < n; j++)
    // {

    //     if (a[i].end < a[j].start)
    //     {
    //         ma = max(ma, a[j].cost + clc(a, j, n));
    //     }
    // }
    dp[i] = ma;
    return ma;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    data a[n + 1];
    a[0].start = 0;
    a[0].end = 0;
    a[0].cost = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll temp, temp1, temp2;
        cin >> temp >> temp1 >> temp2;
        a[i].start = temp;
        a[i].end = temp1;
        a[i].cost = temp2;
    }
    memset(dp, -1, sizeof(dp));
    sort(a, a + n + 1, cond);

    cout << clc(a, 0, n + 1) << endl;
}
