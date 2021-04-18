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
    sort(a, a + n);
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > ans)
        {
            break;
        }
        else
        {
            ans += a[i];
        }
    }
    cout << ans << endl;
}
