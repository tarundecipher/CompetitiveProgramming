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
        ll n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        ll ans = 0;
        if (c0 > c1)
        {
            if (c1 + h < c0)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        ans += c1 + h;
                    }
                    else
                    {
                        ans += c1;
                    }
                }
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        ans += c0;
                    }
                    else
                    {
                        ans += c1;
                    }
                }
            }
        }
        else if (c0 <= c1)
        {
            if (c0 + h < c1)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        ans += c0;
                    }
                    else
                    {
                        ans += c0 + h;
                    }
                }
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        ans += c0;
                    }
                    else
                    {
                        ans += c1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
