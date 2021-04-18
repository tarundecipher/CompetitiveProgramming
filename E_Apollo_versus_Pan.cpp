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
        ll n;
        cin >> n;
        ll x[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        ll M = 1000000007;
        ll ans = 0;
        ll count[64];

        memset(count, 0, sizeof(count));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 60; j++)
            {
                ll temp = (x[i] & (1LL << j));
                if (temp)
                {
                    count[j]++;
                }
            }
        }

        for (ll i = 0; i < n; i++)
        {

            ll temp1 = 0, temp2 = 0;
            for (int p = 0; p < 60; p++)
            {
                ll temp = (x[i] & (1LL << p));
                if (temp)
                {
                    ll t1 = ((1LL) << p) % M;
                    temp1 = (temp1 + t1 * count[p]) % M;
                }
            }
            for (int p = 0; p < 60; p++)
            {
                ll temp = (x[i] & (1LL << p));
                if (temp)
                {
                    ll t1 = ((1LL) << p) % M;
                    temp2 = (temp2 + t1 * n) % M;
                }
                else
                {
                    ll t1 = ((1LL) << p) % M;
                    temp2 = (temp2 + t1 * count[p]) % M;
                }
            }
            ans = (ans % M + (temp1 % M * temp2 % M) % M) % M;
        }

        cout << (ans) % M << endl;
    }
}
