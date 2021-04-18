#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    vector<ll> diff;
    ll maxdiff = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        sum += a;
        diff.push_back(abs(a - b));
        maxdiff += abs(a - b);
    }
    ll res = sum - m;
    if (res <= 0)
    {
        cout << 0 << endl;
    }
    else if (sum - maxdiff > m)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(diff.begin(), diff.end(), greater<ll>());
        ll temp = 0;
        ll index = 0;
        for (ll j = 0; j < diff.size(); j++)
        {
            temp += diff[j];
            if (sum - temp <= m)
            {
                index = j;
                break;
            }
        }
        cout << index + 1 << endl;
    }
}
