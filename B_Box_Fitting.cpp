#include <bits/stdc++.h>
#define ll long long int
using namespace std;

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
        ll a[n];
        ll cnt[21];
        memset(cnt, 0, sizeof(cnt));
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            for (ll j = 20; j >= 0; j--)
            {
                if ((a[i] & (1 << j)) > 0)
                {
                    cnt[j]++;
                    break;
                }
            }
        }

        // ll cnt2[21];
        // memset(cnt2, 0, sizeof(cnt2));
        // for (ll j = 20; j >= 0; j--)
        // {
        //     if ((m & (1 << j)) > 0)
        //     {
        //         cnt2[j]++;
        //         break;
        //     }
        // }
        ll ans = 0;
        while (true)
        {
            ll sum = 0;
            ll i = 20;
            while (i >= 0)
            {
                if (cnt[i] > 0 && ((sum + (1 << i)) <= m))
                {
                    sum += (1 << i);
                    cnt[i]--;
                }
                else
                {
                    i--;
                }
            }
            if (sum > 0)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
}
