#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    if (k * (k - 1) >= n)
    {

        cout << "YES" << endl;
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % k == 0)
            {
                c++;
            }
            cout << i % k + 1 << " " << (c + i % k) % k + 1 << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
