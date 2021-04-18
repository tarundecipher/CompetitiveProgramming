#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[3001][3001];

ll clc(ll a[], ll f, ll l, ll n)
{
    if (f > l)
    {
        return 0;
    }
    if (memo[f][l] != -1)
    {
        return memo[f][l];
    }

    ll a1 = 0;
    ll a2 = 0;
    ll a3 = 0;
    ll a4 = 0;
    a1 = clc(a, f + 2, l, n);

    a3 = clc(a, f + 1, l - 1, n);

    a2 = clc(a, f, l - 2, n);

    a4 = clc(a, f + 1, l - 1, n);
    memo[f][l] = max(a[f] + min(a1, a3), a[l] + min(a2, a4));
    return memo[f][l];
}

int main()
{
    //code

    ll n;
    cin >> n;
    ll a[n];
    memset(memo, -1, sizeof(memo));
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << 2 * clc(a, 0, n - 1, n) - sum << endl;

    return 0;
}