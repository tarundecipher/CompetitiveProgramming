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
        ll n, a, b;
        cin >> n >> a >> b;
        double ca = (double)a;
        double cb = (double)b / (double)2;
        if (cb <= ca)
        {
            if (n % 2 == 0)
            {
                cout << (n / 2) * b << endl;
            }
            else
            {
                cout << ((n / 2) * b) + (n % 2) * a << endl;
            }
        }
        else
        {
            cout << n * a << endl;
        }
    }
}
