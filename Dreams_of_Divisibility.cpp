#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> prime(ll n)
{
    vector<ll> temp;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            if (n / i == i)
            {
                temp.push_back(i);
            }

            else
            {
                temp.push_back(i);
                temp.push_back(n / i);
            }
        }
    }

    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        map<ll, ll> freq;
        ll gcd = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % k != 0)
            {
                freq[(a[i] % k)]++;
            }
            a[i] = a[i] % k;
            gcd = __gcd(a[i], gcd);
        }
        bool cond = true;
        if (freq[gcd] >= 1 && ((k / gcd) & ((k / gcd) - 1)) == 0)
        {
            cond = true;
        }
        else
        {
            cond = false;
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
