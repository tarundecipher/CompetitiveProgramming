#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll a[n + 1];
    a[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll b[n + 1];
    partial_sum(a, a + n + 1, b);
    map<ll, ll> mp;
    ll prev = 0;
    ll ans = 0;
    for (ll i = 0; i < n + 1; i++)
    {
        for (ll j = prev; j < n + 1; j++)
        {
            if (mp[b[j]])
            {

                ans += j - i - 1;
                prev = j;

                break;
            }
            else if (j == n)
            {

                ans += j - i;
                prev = n;
                break;
            }
            mp[b[j]]++;
        }
        mp[b[i]]--;
    }
    cout << ans << endl;
}
