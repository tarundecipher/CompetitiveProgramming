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
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];

        mp[a[i]]++;
    }

    vector<ll> ans;
    // ll ind = 0;
    // ll ma = INT_MIN;
    ll arr[31];
    arr[0] = 2;

    for (int i = 1; i <= 30; i++)
    {
        arr[i] = arr[i - 1] * 2;
        // cout << arr[i] << " ";
    }

    for (ll i = 0; i < n; i++)
    {
        vector<ll> v;
        ll temp = a[i];
        v.push_back(temp);

        for (ll j = 1; j <= 31; j++)
        {
            if (mp[arr[j - 1] + a[i]])
            {
                v.push_back(arr[j - 1] + a[i]);
            }
        }
        if (v.size() == 1)
        {
            if (mp[temp + 1] != 0)
            {
                v.push_back(temp + 1);
            }
        }

        if ((ll)v.size() > ans.size())
        {

            ans = v;
        }
    }

    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
