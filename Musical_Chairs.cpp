
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cond = false;

ll clc(ll n, ll x, ll a[], ll X)
{
    if (x == X && n > 1)
    {
        cond = true;
        return 0;
    }
    if (n == 1)
    {
        if (x <= X)
        {
            return 0;
        }
    }
    ll z = n / 2;
    return (clc(z, x + 1, a, X) + n - a[x] % n) % n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        cond = false;

        ll y = clc(2 * n, 0, a, x);
        if (cond)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << y + 1 << endl;
        }
    }
}
