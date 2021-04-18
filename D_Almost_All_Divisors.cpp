#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll prime(ll n)
{
    ll temp = 1;
    if (n % 2 == 0)
    {
        int res = 0;

        while (n % 2 == 0)
        {
            res++;
            n = n / 2;
        }

        res++;

        temp *= res;
    }

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {

            int res = 0;
            while (n % i == 0)
            {
                res++;
                n = n / i;
            }

            res++;

            temp *= res;
        }
    }
    if (n > 2)
    {
        temp *= 2;
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
        ll a[n];
        ll mi = INT_MAX;
        ll ma = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mi = min(mi, a[i]);
            ma = max(ma, a[i]);
        }

        ll num;

        num = mi * ma;

        bool cond = true;
        for (ll i = 0; i < n; i++)
        {
            if (num % a[i] != 0)
            {
                cond = false;
                break;
            }
        }
        if (prime(num) - 2 != n)
        {
            cond = false;
        }

        if (cond)
        {
            cout << num << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
