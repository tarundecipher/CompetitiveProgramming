#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second > b.second)
    {
        return true;
    }
    else if (a.second == b.second)
    {
        if (a.first < b.first)
        {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a[i].first = temp;
        ll t1 = 0;
        for (ll j = 1; j <= 38; j++)
        {
            if (temp % (ll)pow(3, j) == 0)
            {
                t1 = j;
            }
        }
        a[i].second = t1;
        }
    sort(a, a + n, cmp);
    for (auto i : a)
    {
        cout << i.first << " ";
    }
    cout << endl;
}
