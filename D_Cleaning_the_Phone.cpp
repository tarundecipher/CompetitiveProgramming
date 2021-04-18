#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(ll a, ll b)
{
    if (a > b)
    {

        return true;
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
        ll n, m;
        cin >> n >> m;

        pair<ll, ll> a[n];
        vector<ll> a1, a2;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a[i].first = temp;
        }

        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a[i].second = temp;
            if (temp == 1)
            {
                a1.push_back(a[i].first);
            }
            else
            {
                a2.push_back(a[i].first);
            }
        }
        sort(a1.begin(), a1.end(), cond);
        sort(a2.begin(), a2.end(), cond);
        ll ans = 0;
        ll b1[a1.size()], b2[a2.size()];
        partial_sum(a1.begin(), a1.end(), b1);
        partial_sum(a2.begin(), a2.end(), b2);
        ll ma = INT_MAX;
        ll sum = 0;

        ll rem = m - sum;

        auto it = lower_bound(b1, b1 + a1.size(), rem);

        ll t1 = it - b1;

        if (t1 != (a1.size()) && b1[t1] >= rem)
        {
            // cout << b1[t1] << " " << rem << endl;
            ma = min(t1 + 1, ma);
        }

        for (ll i = 0; i < a2.size(); i++)
        {

            ll sum = 0;

            sum = b2[i];

            ll rem = m - sum;
            if (rem > 0)
            {
                auto it = lower_bound(b1, b1 + a1.size(), rem);

                ll t1 = it - b1;
                // cout << i << " " << t1 << " " << rem << " " << b1[t1] << endl;
                if (t1 != (a1.size()) && b1[t1] >= rem)
                {
                    ma = min((i + 1) * 2 + t1 + 1, ma);
                }
            }
            else if (rem <= 0)
            {

                ma = min((i + 1) * 2, ma);
            }
        }
        if (ma == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ma << endl;
        }
    }
}
