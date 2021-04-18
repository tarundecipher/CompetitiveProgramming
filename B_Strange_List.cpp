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
        ll n, x;
        cin >> n >> x;
        queue<pair<ll, ll>> a;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.push({temp, 1});
        }
        ll sum = 0;
        while (!a.empty())
        {

            pair<ll, ll> temp = a.front();
            // cout << temp << " ";
            a.pop();
            sum += temp.first * temp.second;
            if (temp.first % x == 0)
            {
                // for (ll j = 0; j < x; j++)
                // {
                a.push({temp.first / x, x * temp.second});
                // }
            }
            else
            {
                break;
            }
        }
        while (!a.empty())
        {

            pair<ll, ll> temp = a.front();
            // cout << temp << " ";
            a.pop();
            sum += temp.first * temp.second;
        }
        // cout << endl;

        cout << sum << endl;
    }
}
