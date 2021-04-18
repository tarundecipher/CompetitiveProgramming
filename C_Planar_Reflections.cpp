#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll cnt[(ll)1001][(ll)1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        memset(cnt, 0, sizeof(cnt));
        ll n, k;
        cin >> n >> k;

        ll par = n % 2;

        for (ll i = 0; i < n; i++)
        {
            cnt[k][i] = 1;
        }
        for (ll j = k - 1; j > 0; j--)
        {
            if (j % 2 == par)
            {
                for (ll i = 0; i < n; i++)
                {

                    cnt[j][i] = cnt[j + 1][i + 1] + cnt[j][i - 1];
                }
                // cnt[j][n - 1] += 1;
            }
            else
            {
                for (ll i = n - 1; i >= 0; i--)
                {
                    cnt[j][i] = cnt[j + 1][i - 1] + cnt[j][i + 1];
                }
                cnt[j][0] += 1;
            }
        }
        ll ans = 1;
        for (ll i = k - 1; i > 0; i--)
        {
            if (i % 2 == par)
            {
                ans += cnt[i][n - 1];
            }
            else
            {
                ans += cnt[i][0];
            }

            // cout << endl;
        }
        // for (ll i = k - 1; i > 0; i--)
        // {
        //     for (ll j = 0; j < n; j++)
        //     {
        //         cout << cnt[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        cout << ans << endl;
        // cout << endl;
    }
}
