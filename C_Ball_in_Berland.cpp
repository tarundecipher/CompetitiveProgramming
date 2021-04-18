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
        ll a, b, k;
        cin >> a >> b >> k;
        pair<ll, ll> arr[k];
        map<ll, ll> mb, mg;
        map<pair<ll, ll>, ll> mp;
        for (ll i = 0; i < k; i++)
        {
            ll temp;
            cin >> temp;
            arr[i].first = temp;
            mb[temp]++;
        }
        for (ll i = 0; i < k; i++)
        {
            ll temp;
            cin >> temp;
            arr[i].second = temp;
            mg[temp]++;
        }
        for (ll i = 0; i < k; i++)
        {
            mp[arr[i]]++;
        }
        ll sum = 0;
        ll a1 = 0;
        for (ll i = 0; i < k; i++)
        {

            sum += (k - 1) - ((mb[arr[i].first] - 1) + (mg[arr[i].second] - 1) - (mp[arr[i]] - 1));
            // cout << i << " " << (k - 1) - ((mb[arr[i].first] - 1) + (mg[arr[i].second] - 1) - (mp[arr[i]] - 1)) << endl;
            // mb[arr[i].first]--;
            // mg[arr[i].second]--;
            // mp[arr[i]]--;
        }
        cout << sum / 2 << endl;
    }
}
