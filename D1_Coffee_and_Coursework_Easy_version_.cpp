#include <bits/stdc++.h>
#define ll long long int
using namespace std;
map<pair<ll, ll>, ll> memo;

ll clc(ll a[], ll k, ll n, ll course)
{

    if (k >= n)
    {
        if (course <= 0)
        {
            return 0;
        }

        return 10000;
    }

    if (memo[{k, course}] != 0)
    {
        return memo[{k, course}];
    }
    if (course <= 0)
    {
        return 0;
    }
    ll res = 10000;
    if (course > 0)
    {

        int d = 0;
        int a2 = 10000;
        int sum = 0;
        for (int i = k; i < n; i++)
        {
            if (course - max(0, (int)(sum)) <= 0)
            {
                sum += a[i] - d;

                a2 = 1 + clc(a, i + 1, n, course - max(0, (int)(sum)));
                d++;
                res = min(a2, (int)res);
                break;
            }
            else
            {
                sum += a[i] - d;

                a2 = 1 + clc(a, i + 1, n, course - max(0, (int)(sum)));
                d++;
                res = min(a2, (int)res);
            }
        }
    }

    memo[{k, course}] = res;
    return res;
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
    sort(a, a + n, greater<ll>());
    // memset(memo, -1, sizeof(memo));
    ll ans = clc(a, 0, n, m);

    if (ans >= 10000)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
