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
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
        if (a[i] & 1)
        {
            st.insert(a[i] + 1);
        }
        else
        {
            st.insert(a[i] - 1);
        }
    }

    for (auto i : st)
    {
        bool cond;
        if (i & 1)
        {
            cond = true;
        }
        else
        {
            cond = false;
        }
        for (ll j = 0; j < n; j++)
        {
            if (a[j] == i && cond)
            {
                a[j]++;
            }
            else if (a[j] == i && cond == false)
            {
                a[j]--;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
