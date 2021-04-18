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

        ll n2 = 0;
        ll n3 = 0;
        ll n5 = 0;
        bool cond = true;

        if (n % 2 == 0)
        {
            while (n % 2 == 0)
            {
                n = n / 2;
                n2++;
            }
        }

        if (n % 3 == 0)
        {
            while (n % 3 == 0)
            {
                n = n / 3;
                n3++;
            }
        }

        if (n % 5 == 0)
        {
            while (n % 5 == 0)
            {
                n = n / 5;
                n5++;
            }
        }

        if (n > 2)
        {
            cond = false;
        }

        if (cond == false)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n2 + 2 * n3 + 3 * n5 << endl;
        }
    }
}
