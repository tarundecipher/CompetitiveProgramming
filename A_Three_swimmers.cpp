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
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        ll a1 = p % a;
        ll b1 = p % b;
        ll c1 = p % c;
        if (a1 == 0 || b1 == 0 || c1 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min(a - a1, min(b - b1, c - c1)) << endl;
        }
    }
}
