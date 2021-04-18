#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dig(ll n)
{
    string s = to_string(n);
    ll sum = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        sum += (s[i] - '0');
    }
    return sum;
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
        ll ans;
        for (ll i = n; i <= n + 100; i++)
        {
            if (__gcd(i, dig(i)) > 1)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}
