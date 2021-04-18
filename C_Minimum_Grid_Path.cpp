#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long int
using namespace std;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;

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
        vector<ll> even, odd;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }

        new_data_set s1, s2;
        ll cost = 1e18;
        ll coste = 0;
        ll costo = 0;

        ll cume = 0;
        ll cumo = 0;
        ll ne = 0;
        ll no = 0;
        for (ll i = 0; i < n; i++)
        {
            int c1 = 0;
            if (i % 2 == 0)
            {
                ll c1 = 0;
                s1.insert(a[i]);
                ne++;
                cume += a[i];
                coste = *s1.find_by_order(0) * (n - ne + 1) + cume - *s1.find_by_order(0);
            }

            else
            {
                ll c1 = 0;
                s2.insert(a[i]);
                no++;
                cumo += a[i];
                costo = *s2.find_by_order(0) * (n - no + 1) + cumo - *s2.find_by_order(0);
            }
            if (costo != 0 && coste != 0)
            {
                cost = min(cost, costo + coste);
            }
        }
        cout << cost << endl;
    }
}
