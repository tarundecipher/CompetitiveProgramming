#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[101][100001];
int M = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(memo, 0, sizeof(memo));
    // cout << clc(a, 0, k, n) << endl;

    for (ll i = n; i >= 0; i--)
    {
        for (ll k1 = 0; k1 <= k; k1++)
        {
            if (i >= n)
            {
                if (k1 == 0)
                {

                    memo[i][k1] = 1;
                }
                else
                {
                    memo[i][k1] = 0;
                }
            }
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        ll prefix[k + 1];
        prefix[0] = memo[i + 1][0] % M;
        for (ll j = 1; j <= k; j++)
        {
            prefix[j] = ((prefix[j - 1] % M) + memo[i + 1][j] % M) % M;
        }

        for (ll k1 = 0; k1 <= k; k1++)
        {

            ll a1 = 0;

            // for (ll j = 0; j <= min(a[i], k1); j++)
            // {

            //     a2 += memo[i + 1][k1 - j] % M;
            // }

            if (k1 > a[i])
            {
                a1 = (prefix[k1] + M - prefix[k1 - a[i] - 1]);
                a1 = a1 % M;
            }
            else
            {
                a1 = prefix[k1];
            }
            // cout << a1 << " " << a2 << endl;
            memo[i][k1] = a1 % M;
        }
    }
    cout << memo[0][k] % M << endl;
}
