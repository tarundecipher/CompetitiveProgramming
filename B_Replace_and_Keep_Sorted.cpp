#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = (ll)2e5;
ll t[4 * N];

void update(ll v, ll l, ll r, ll ind, ll val)
{
    //vertex v should be 1
    if (ind < l || ind > r)
    {
        return;
    }
    if (ind == l && ind == r)
    {

        t[v] += val;
        return;
    }

    ll m = l + (r - l) / 2;
    update(2 * v, l, m, ind, val);
    update(2 * v + 1, m + 1, r, ind, val);
    t[v] = t[2 * v] + t[2 * v + 1];
}

ll getsum(ll v, ll l, ll r, ll tl, ll tr)
{
    //vertex v should be 1
    if (tr < l || tl > r)
    {
        return 0;
    }
    if (tl >= l && tr <= r)
    {
        return t[v];
    }

    ll m = tl + (tr - tl) / 2;
    ll res = getsum(2 * v, l, r, tl, m) + getsum(2 * v + 1, l, r, m + 1, tr);
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q, k;
    cin >> n >> q >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[n];
    memset(b, 0, sizeof(b));
    for (ll i = 1; i < n - 1; i++)
    {

        b[i] = a[i + 1] - a[i - 1] - 2;
    }
    for (ll i = 0; i < n; i++)
    {
        update(1, 0, n - 1, i, b[i]);
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll x = 0;
        if (r - l + 1 > 2)
        {
            x = getsum(1, l, r - 2, 0, n - 1);

            cout << x + (a[l] - 2 + k - a[r - 2] - 1) << endl;
        }
        else
        {
            if (r - l + 1 == 2)
            {
                cout << a[r - 1] - 2 + k - a[l - 1] - 1 << endl;
            }
            else if (r - l + 1 == 1)
            {
                cout << k - 1 << endl;
            }
        }
    }
}
