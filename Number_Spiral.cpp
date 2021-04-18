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
        ll y, x;
        cin >> y >> x;
        if (y > x)
        {
            if (y % 2 == 0)
            {
                y--;
                ll m = (y) * (2 + (y - 1)) + 1;
                ll ans = m + y - x + 1;

                cout << ans << endl;
            }
            else
            {
                y--;
                ll m = (y) * (2 + (y - 1)) + 1;

                ll ans = m - (y - x + 1);

                cout << ans << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                x--;
                ll m = (x) * (2 + (x - 1)) + 1;
                ll ans = m - (x - y + 1);

                cout << ans << endl;
            }
            else
            {
                x--;
                ll m = (x) * (2 + (x - 1)) + 1;
                ll ans = m + (x - y) + 1;
                // cout << m << endl;
                cout << ans << endl;
            }
        }
    }
}
