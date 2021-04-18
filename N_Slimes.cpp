#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[401];

ll getsum(ll l, ll r)
{
    ll temp = 0;
    for (ll i = l; i <= r; i++)
    {
        temp += a[i];
    }
    return temp;
}

ll memo[401][401];
ll clc(ll l, ll r)
{
    if (l == r)
    {
        return 0;
    }
    if (memo[l][r] != -1)
    {
        return memo[l][r];
    }
    ll ans = 2e17;
    for (ll x = l; x < r; x++)
    {
        ll temp = getsum(l, x) + getsum(x + 1, r) + clc(l, x) + clc(x + 1, r);
        ans = min(ans, temp);
    }
    memo[l][r] = ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(memo, -1, sizeof(memo));
    cout << clc(0, n - 1) << endl;
}
