#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll ans = INT_MAX;

void clc(ll a[], ll sum, ll tot, ll i, ll n)
{
    if (i >= n)
    {
        if (tot != sum)
        {
            ans = min(ans, abs((tot - sum) - sum));
        }
        return;
    }

    clc(a, sum + a[i], tot, i + 1, n);
    clc(a, sum, tot, i + 1, n);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll a[n];
    ll tot = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }
    clc(a, 0, tot, 0, n);
    cout << ans << endl;
}
