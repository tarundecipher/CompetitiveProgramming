#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll M = (ll)1e9 + 7;
ll dp[(ll)2e5][502];
ll clc(ll target, ll j, ll n)
{
    if (j >= n)
    {
        if (target == 0)
        {
            return 1;
        }
        return 0;
    }
    if (target == 0)
    {
        return 1;
    }
    if (dp[target][j] != -1)
    {
        return dp[target][j];
    }
    ll a1 = 0;
    ll a2 = 0;
    if (target - j >= 0)
    {
        a1 = (clc(target - j, j + 1, n) % M) % M;
    }
    a2 = (clc(target, j + 1, n) % M) % M;
    dp[target][j] = (a1 % M + a2 % M) % M;
    return (a1 % M + a2 % M) % M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << clc(sum / 2, 1, n);
    }
}
