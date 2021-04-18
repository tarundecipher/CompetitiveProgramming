#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool visited[(ll)1e5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {

        ll n, m;
        cin >> n >> m;
        ll g = m + 1;
        ll k = (n - m) / g;
        ll res = (n - m) % g;
        cout << n * (n + 1) / 2 - k * (k + 1) * (g - res) / 2 - (k + 1) * (k + 2) * res / 2 << endl;
    }
}
