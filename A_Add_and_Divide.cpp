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
        ll a, b;
        cin >> a >> b;
        ll res = (ll)1e10;
        if (b != 1)
        {
            for (ll i = b; i <= b + 100; i++)
            {
                ll a1 = a;
                ll c = i - b;
                while (a1 != 0)
                {
                    a1 = a1 / i;
                    c++;
                }
                if (c > 0)
                {
                    res = min(res, c);
                }
            }
            cout << res << endl;
        }
        else
        {
            for (ll i = b + 1; i <= b + 100; i++)
            {
                ll a1 = a;
                ll c = i - b;
                while (a1 != 0)
                {
                    a1 = a1 / i;
                    c++;
                }
                if (c > 0)
                {
                    res = min(res, c);
                }
            }
            cout << res << endl;
        }
    }
}
