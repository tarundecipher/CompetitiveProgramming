#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second > b.second)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        pair<ll, ll> arr[3];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] % 3;
            if (a[i] == 0)
            {
                arr[0].first = 0;
                arr[0].second++;
            }
            else if (a[i] == 1)
            {
                arr[1].first = 1;
                arr[1].second++;
            }
            else if (a[i] == 2)
            {
                arr[2].first = 2;
                arr[2].second++;
            }
        }
        ll req = n / 3;
        ll ans = 0;
        for (int j = 0; j < 3; j++)
        {
            for (ll i = 0; i < 3; i++)
            {
                if (arr[i].second > req)
                {
                    arr[(i + 1) % 3].second += arr[i].second - req;
                    ans += arr[i].second - req;
                    arr[i].second = req;
                }
            }
        }
        cout << ans << endl;
    }
}
