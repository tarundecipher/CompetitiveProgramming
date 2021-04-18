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
    ordered_set st;
    for (ll i = 0; i < k; i++)
    {
        st.insert(a[i]);
    }
    ll temp;
    if (k % 2)
    {
        temp = k / 2;
    }
    else
    {
        temp = k / 2 - 1;
    }

    auto x = st.find_by_order(temp);
    multiset<ll> su1;
    multiset<ll> sd1;
    ll ans = 0;
    ll su = 0;
    ll sd = 0;
    int c = 0;
    for (auto j : st)
    {
        if (c >= temp)
        {
            su += j;
            su1.insert(j);
        }
        else
        {
            sd += j;
            sd1.insert(j);
        }
        c++;
    }

    for (ll i = k; i < n; i++)
    {

        if (a[i] > *sd1.end())
        {
        }
    }
}
