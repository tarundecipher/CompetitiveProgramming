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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll b[n];
    b[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }

    ll c[n];

    c[n - 1] = a[n - 1];

    for (ll i = n - 2; i >= 0; i--)
    {
        c[i] = c[i + 1] + a[i];
    }
    ll ans = 0;
    ll p1 = 0;
    ll p2 = n - 1;

    while (p1 < p2)
    {
        if (b[p1] < c[p2])
        {
            p1++;
        }
        else if (b[p1] > c[p2])
        {
            p2--;
        }
        else if (b[p1] == c[p2])
        {
            ans = b[p1];
            p1++;
            p2--;
        }
    }
    cout << ans << endl;
}
