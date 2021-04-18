#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void prime(ll n, set<int> &st)
{
    ll temp = INT_MIN;
    if (n % 2 == 0)
    {
        st.insert(2);
        while (n % 2 == 0)
        {
            n = n / 2;
        }
    }

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            st.insert(i);
            temp = max(temp, i);
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    }
    if (n > 2)
    {
        st.insert(n);
        temp = max(temp, n);
    }
}

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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l;
        vector<set<int>> vl, vr;
        set<int> left;
        set<int> right;

        for (int i = 0; i < n; i++)
        {
            prime(a[i], left);
            vl.push_back(left);
        }
        // for (int i = n - 1; i >= 0; i--)
        // {
        //     prime(a[i], right);
        //     vr.push_back(right);
        // }
        // reverse(vr.begin(), vr.end());
        for (ll i = 0; i < n - 1; i++)
        {

            set<int> uni;
            for (auto x : vl[i])
            {
                uni.insert(x);
                // cout << x << " ";
            }
            cout << endl;

            for (auto x : vr[i + 1])
            {
                uni.insert(x);
                // cout << x << " ";
            }
            cout << endl;

            if (vl[i].size() + vr[i + 1].size() == uni.size())
            {
                l = i;
                break;
            }
        }
        cout << l + 1 << endl;
    }
}
