#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll sieve[200001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    ll n = 200001;
    memset(sieve, -1, sizeof(sieve));
    for (int i = 4; i < n; i += 2)
    {
        sieve[i] = 2;
    }
    for (ll i = 3; i < n; i++)
    {
        if (sieve[i] == -1)
        {
            for (ll j = i * i; j < n; j += i)
            {
                sieve[j] = i;
            }
        }
    }
    while (t--)
    {
        ll d;
        cin >> d;

        vector<ll> res;
        ll prev = 1;
        for (ll i = 2; i < n; i++)
        {
            if (i - prev >= d && sieve[i] == -1)
            {
                res.push_back(i);
                prev = i;
            }
            if (res.size() == 2)
            {
                break;
            }
        }
        // for (auto i : res)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        cout << res[0] * res[1] << endl;
    }
}
