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
        ll r[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        ll m;
        cin >> m;
        ll b[m];
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        ll p1[n];

        memset(p1, 0, sizeof(p1));
        p1[0] = r[0];
        for (int i = 1; i < n; i++)
        {
            p1[i] = p1[i - 1] + r[i];
        }
        ll p2[m];
        memset(p2, 0, sizeof(p2));
        p2[0] = b[0];
        for (int i = 1; i < m; i++)
        {
            p2[i] = p2[i - 1] + b[i];
        }

        ll ma1 = 0;
        ll ma2 = 0;
        for (ll i = 0; i < n; i++)
        {

            ma1 = max(ma1, p1[i]);
        }

        for (ll i = 0; i < m; i++)
        {

            ma2 = max(ma2, p2[i]);
        }
        ll t1 = max(ma1 + ma2, (ll)0);

        cout << t1 << endl;
    }
}
