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
        ll a[n];
        ll sum = 0;
        bool cond = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (sum < i * (i + 1) / 2)
            {
                cond = false;
            }
        }

        if (cond)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
