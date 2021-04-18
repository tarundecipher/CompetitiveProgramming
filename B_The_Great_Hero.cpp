#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond2(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.first < p2.first)
    {
        return true;
    }
    else if (p1.first == p2.first)
    {
        if (p1.second < p2.second)
        {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        pair<ll, ll> p[n];
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            p[i].first = temp;
        }
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            p[i].second = temp;
        }
        sort(p, p + n, cond2);

        for (ll i = 0; i < n; i++)
        {
            if (b > 0)
            {
                ll num = ceil((double)p[i].second / (double)a);
                ll num2 = ceil((double)b / (double)p[i].first);

                if (num2 >= num)
                {
                    p[i].second = 0;
                    b -= num * p[i].first;
                }
                else
                {
                    p[i].second -= num2 * a;
                    b = 0;
                }
            }
        }
        bool cond = true;
        for (ll i = 0; i < n; i++)
        {

            if (p[i].second > 0)
            {
                cond = false;
                break;
            }
        }
        if (cond)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
