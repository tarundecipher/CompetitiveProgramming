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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll s1 = 0;
        ll s2 = 0;
        map<ll, ll> se1;
        map<ll, ll> se2;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s1 += a[i];
                se1[a[i]]++;
            }
            else
            {
                s2 += a[i];
                se2[a[i]]++;
            }
        }
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool cond = false;
            if (s1 > s2)
            {
                ll x = s1 - s2;
                for (ll i = 0; i < n; i += 2)
                {
                    if (se2[(a[i]) - x / 2])
                    {
                        cond = true;
                        break;
                    }
                }
            }
            else
            {
                ll x = s2 - s1;
                for (ll i = 1; i < n; i += 2)
                {
                    if (se1[(a[i]) - x / 2])
                    {
                        cond = true;
                        break;
                    }
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
}
