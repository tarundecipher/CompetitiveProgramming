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
        ll n1 = 2 * n;
        ll a[n1];
        set<ll> st;
        bool cond2 = true;
        for (ll i = 0; i < n1; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
            if (a[i] % 2 != 0)
            {
                cond2 = false;
            }
        }
        vector<ll> b;
        for (auto i : st)
        {
            b.push_back(i);
        }
        sort(b.begin(), b.end(), greater<ll>());

        if (st.size() == n && cond2)
        {
            vector<ll> ans;
            ll prev = 0;
            bool cond = true;
            for (ll i = 0; i < b.size(); i++)
            {
                if ((b[i] - 2 * prev) % (n1 - 2 * i) == 0)
                {
                    ll d = (n1 - 2 * i);
                    ll t1 = (b[i] - 2 * prev);
                    ll temp = t1 / d;

                    ans.push_back(temp);
                    prev += temp;
                }
                else
                {
                    cond = false;
                    break;
                }
            }
            if (cond)
            {
                bool cond3 = true;
                for (auto i : ans)
                {
                    // cout << i << " ";
                    if (i <= 0)
                    {
                        cond3 = false;
                        break;
                    }
                }
                // cout << endl;

                if (cond3 == true)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
