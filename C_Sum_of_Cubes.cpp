#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    ll N = (ll)1e4 + 5;
    ll a[N];
    map<ll, ll> mp;
    for (ll i = 1; i < N; i++)
    {
        a[i] = i * i * i;
        mp[a[i]] = i;
    }
    while (t--)
    {
        ll x;
        cin >> x;
        bool cond = false;
        for (ll i = 1; i < N; i++)
        {
            if (mp[x - a[i]])
            {
                cond = true;
            }
        }
        if (cond)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
