#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll ans = (ll)1e10;
ll sq(ll x)
{
    return abs(x) * abs(x);
}

void solve(vector<ll> a, vector<ll> b, vector<ll> c)
{

    for (auto i : a)
    {
        ll x = -1;
        int l = 0;
        int r = b.size() - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (b[m] > i)
            {
                r = m - 1;
            }
            else if (b[m] <= i)
            {
                l = m + 1;
                x = b[m];
            }
        }
        ll y = -1;
        l = 0;
        r = c.size() - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (c[m] < i)
            {
                l = m + 1;
            }
            else if (c[m] >= i)
            {
                r = m - 1;
                y = c[m];
            }
        }
        if (x == -1)
        {
            x = b[0];
        }
        if (y == -1)
        {
            y = c[c.size() - 1];
        }
        // if (x == b.end() || y == c.begin())
        // {
        //     continue;
        // }
        // y--;
        ans = min(ans, sq(i - x) + sq(x - y) + sq(y - i));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll r, b, g;
        cin >> r >> b >> g;
        vector<ll> red;
        vector<ll> blue;
        vector<ll> green;
        for (ll i = 0; i < r; i++)
        {
            ll temp;
            cin >> temp;
            red.push_back(temp);
        }
        for (ll i = 0; i < b; i++)
        {
            ll temp;
            cin >> temp;
            blue.push_back(temp);
        }
        for (ll i = 0; i < g; i++)
        {
            ll temp;
            cin >> temp;
            green.push_back(temp);
        }
        ans = LLONG_MAX;
        sort(red.begin(), red.end());
        sort(blue.begin(), blue.end());
        sort(green.begin(), green.end());

        solve(red, blue, green);
        solve(blue, red, green);
        solve(blue, green, red);
        solve(red, green, blue);
        solve(green, red, blue);
        solve(green, blue, red);

        cout << ans << endl;
    }
}
