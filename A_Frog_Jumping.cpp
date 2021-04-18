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
        ll a, b, k;
        cin >> a >> b >> k;
        ll front = a - b;
        if (k % 2 == 0)
        {
            cout << front * (k / 2) << endl;
        }
        else
        {
            cout << front * (k / 2) + a << endl;
        }
    }
}
