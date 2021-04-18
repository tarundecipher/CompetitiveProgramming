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
        ll n1 = 0;
        ll n2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1)
            {
                n1++;
            }
            else
            {
                n2++;
            }
        }
        sort(a, a + n);
        if (sum % 2 == 0)
        {
            bool cond = false;
            if (n1 % 2 == 0 && n1 != 0)
            {
                cond = true;
            }
            if (n1 == 0 && n2 % 2 == 0)
            {
                cond = true;
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
        else
        {
            cout << "NO" << endl;
        }
    }
}
