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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if (a * n + b < s)
        {

            cout << "NO" << endl;
        }
        else
        {
            ll res = min(s / n, a);
            res = res * n;
            s = s - res;
            if (b >= s)
            {
                cout << "YES" << endl;
            }
            else
            {

                cout << "NO" << endl;
            }
        }
    }
}
