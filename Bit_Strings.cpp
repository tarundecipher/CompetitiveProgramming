#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll m = (ll)1e9 + 7;
    ll res = 1;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        res = (res % m * 2 % m) % m;
    }
    cout << res % m << endl;
}
