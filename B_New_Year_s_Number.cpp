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
        ll x = n;
        ll n20 = 0;
        ll n21 = 0;
        for (ll i = 0; i < (ll)1e4; i++)
        {
            if (n - 2020 >= 0)
            {
                if (n % 2021 == 0)
                {
                    n21 = n / 2021;
                    break;
                }
                n = n - 2020;
                n20++;
            }
            else
            {
                break;
            }
        }
        if (n20 * 2020 + n21 * 2021 == x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
