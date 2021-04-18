#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll prime(ll n)
{
    ll temp = 1e10;
    vector<ll> v;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            temp = min(temp, i);
            while (n % i == 0)
            {
                n = n / i;
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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << endl;
        }
        else if (n == 3)
        {
            cout << 2 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }
}
