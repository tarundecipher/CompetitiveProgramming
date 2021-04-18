#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt[21];
    memset(cnt, 0, sizeof(cnt));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 21; j++)
        {
            if (((1 << j) & a[i]) != 0)
            {
                cnt[j]++;
            }
        }
    }
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = 20; j >= 0; j--)
        {
            if (cnt[j] != 0)
            {
                cnt[j]--;
                sum += (1 << j);
            }
        }
        res += sum * sum;
    }
    cout << res << endl;
}
