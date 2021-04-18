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
        ll n, w;
        cin >> n >> w;
        vector<pair<ll, ll>> a;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.push_back({temp, i + 1});
        }
        vector<ll> ans;
        sort(a.begin(), a.end());
        ll sum = 0;
        ll index = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i].first <= w)
            {
                index = i;
                break;
            }
        }
        double upper = ceil((double)w / (double)2);
        for (ll i = index; i >= 0; i--)
        {
            if (sum + a[i].first <= w)
            {
                sum += a[i].first;
                ans.push_back(a[i].second);
            }

            if (sum >= upper && sum <= w)
            {
                break;
            }
        }

        if (sum <= w && sum >= upper)
        {
            cout << ans.size() << endl;
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {

            cout << -1 << endl;
        }
    }
}
