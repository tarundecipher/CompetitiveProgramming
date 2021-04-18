#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<ll> st;
    set<ll> st2;
    ll ans = 0;
    ll l = 0;
    ll r = 0;
    while (l < n && r < n)
    {
        st.insert(a[r]);
        st2.insert(a[r]);

        while (l < r && st2.size() > k)
        {
            if (st.count(a[l]) == 1)
            {
                st2.erase(a[l]);
                st.erase(a[l]);
            }
            else if (st.count(a[l]) > 1)
            {
                st.erase(st.find(a[l]));
            }

            l++;
        }
        ans += r - l + 1;

        if (r < n)
        {
            r++;
        }
    }

    cout << ans << endl;
}
