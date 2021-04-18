#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;

    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a.push_back({temp, i + 1});
    }
    ll sum = 0;
    sort(a.begin(), a.end());
    for (ll i = 0; i < n - 1; i++)
    {
        sum += a[i].first;
    }
    ll s2 = a[n - 1].first;
    set<ll> st;

    for (ll i = 0; i < n - 1; i++)
    {
        if (sum - a[i].first == s2)
        {
            // cout << sum << " " << a[i].first << " " << s2 << endl;
            st.insert(a[i].second);
        }
    }
    ll sum2 = 0;
    for (ll i = 0; i < n - 2; i++)
    {

        sum2 += a[i].first;
    }
    if (sum2 == a[n - 2].first)
    {

        st.insert(a[n - 1].second);
    }
    cout << st.size() << endl;
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
}
