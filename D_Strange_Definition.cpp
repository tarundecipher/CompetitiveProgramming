#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sieve[(int)1e6 + 5];

ll getFactorization(int x)
{
    ll ans = 1;
    unordered_map<ll, ll> mp;
    while (x != 1)
    {
        mp[sieve[x]]++;
        x = x / sieve[x];
    }
    for (auto i : mp)
    {
        if (i.second % 2 == 1)
        {
            ans *= i.first;
        }
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(sieve, -1, sizeof(sieve));
    for (int i = 2; i < 1e6 + 5; i++)
    {
        if (sieve[i] == -1)
        {
            for (int j = i; j <= 1e6 + 5; j += i)
            {
                if (sieve[j] == -1)
                {
                    sieve[j] = i;
                }
            }
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ll temp = getFactorization(a[i]);

            mp[temp]++;
        }
        ll ma0 = INT_MIN;
        for (auto i : mp)
        {
            ma0 = max(ma0, i.second);
        }
        ll ma1 = 0;
        ll temp = INT_MIN;
        for (auto i : mp)
        {
            if (i.second % 2 == 0 || i.first == 1)
            {
                ma1 += i.second;
            }
            else
            {
                temp = max(temp, i.second);
            }
        }
        ma1 = max(ma1, temp);
        ll q;
        cin >> q;

        while (q--)
        {
            ll w;
            cin >> w;
            if (w == 0)
            {
                cout << ma0 << endl;
            }
            else
            {
                cout << ma1 << endl;
            }
        }
    }
}
