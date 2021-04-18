#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll a[n];
    ll mi = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mi = max(mi, a[i]);
    }
    ll c = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i];
        if (ans < 0)
        {
            ans = 0;
        }
        else
        {
            c = max(c, ans);
        }
    }
    if (c == 0)
    {
        c = mi;
    }
    cout << c << endl;
}
