#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 2 * a[0] << endl;
        return 0;
    }
    sort(a, a + n);
    ll b[n];
    partial_sum(a, a + n, b);
    if (a[n - 1] > b[n - 2])
    {
        cout << a[n - 1] - b[n - 2] + b[n - 1] << endl;
    }
    else
    {
        cout << b[n - 1] << endl;
    }
}
