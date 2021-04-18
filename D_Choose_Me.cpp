#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cond(pair<ll, ll> a, pair<ll, ll> b)
{
    if (2 * a.first + a.second > 2 * b.first + b.second)
    {
        return true;
    }

    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    pair<ll, ll> arr[n];
    ll aori = 0;
    ll taka = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        arr[i] = {a, b};
        aori += a;
    }
    sort(arr, arr + n, cond);
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        if (taka > aori)
        {
            break;
        }
        aori -= arr[i].first;
        taka += arr[i].first + arr[i].second;
        c++;
    }
    cout << c << endl;
}
