#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll u, v;
    cin >> u >> v;
    if (u > v)
    {
        cout << -1 << endl;
        return 0;
    }
    if (u == 0 && v == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    ll x = (v - u) / 2;
    ll x1 = x;
    bool cond2 = true;
    if ((v - u) % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
        cond2 = false;
    }
    ll a = 0;
    ll b = 0;
    bool cond = false;
    for (ll i = 0; i < 62; i++)
    {
        ll p = (1LL << i) & (x);
        ll p1 = (1LL << i) & (u);
        if (p != 0 && p1 != 0)
        {
            cond = true;
            break;
        }
        else if (p != 0)
        {
            a = a | (1LL << i);
            b = b | (1LL << i);
        }
        else if (p1 != 0)
        {
            a = a | (1LL << i);
        }
    }
    if (cond)
    {
        if (cond2)
        {
            cout << 3 << endl;
            cout << u << " " << x << " " << x1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (a == 0)
        {
            cout << 1 << endl;
            cout << b << endl;
        }
        else if (b == 0)
        {
            cout << 1 << endl;
            cout << a << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << a << " " << b << endl;
        }
    }
}
