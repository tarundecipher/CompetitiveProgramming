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
        ll n;
        cin >> n;
        ll a[n];
        ll c[n];
        map<int, vector<int>> mp;
        ll ma = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            c[i] = a[i];
            mp[a[i]].push_back(i);
            ma = max(ma, a[i]);
        }
        sort(a, a + n);
        ll b[n];
        partial_sum(a, a + n, b);

        vector<ll> ans;

        map<int, int> mp2;

        for (ll i = n - 2; i >= 0; i--)
        {
            if (!mp2[a[i]])
            {
                if (b[i] >= a[i + 1])
                {
                    for (auto j : mp[a[i]])
                    {
                        // cout << a[i] << " " << i + 1 << " " << endl;
                        ans.push_back(j + 1);
                    }
                }
                else
                {
                    break;
                }

                mp2[a[i]]++;
            }
        }
        if (!mp2[ma])
        {
            for (auto i : mp[ma])
            {
                ans.push_back(i + 1);
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
