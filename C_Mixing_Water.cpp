#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long double t;
    cin >> t;

    while (t--)
    {
        long double a, b, c;
        cin >> a >> b >> c;
        long double l = 1;
        long double r = 1e6;
        long double ans;
        long double prev = 1e6;
        long double prevm = 1e6;
        long double ma = INT_MAX;
        while (l <= r)
        {
            long double m = (l) + (r - l) / 2;
            long double m1 = m;
            long double na = (m1 / 2) + 1;
            long double nb = m1 / 2;
            long double x = (long double)(na * a + nb * b) / (long double)m;
            cout << x << " " << c << " " << m << endl;
            if (c > x)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
            if (ma >= abs(x - c))
            {
                ma = abs(x - c);
                ans = m;
            }
        }
        if (c <= (a + b) / 2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}
