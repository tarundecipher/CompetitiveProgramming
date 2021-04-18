#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct compare
{
    bool operator()(const pair<int, int> &value,
                    const int &key)
    {
        return (value.first < key);
    }
    bool operator()(const int &key,
                    const pair<int, int> &value)
    {
        return (key < value.first);
    }
};

struct compare2
{
    bool operator()(const pair<int, int> &value,
                    const int &key)
    {
        return (value.second < key);
    }
    bool operator()(const int &key,
                    const pair<int, int> &value)
    {
        return (key < value.second);
    }
};

bool cond(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.first == b.first)
    {
        if (a.second < b.second)
        {
            return true;
        }
        return false;
    }
    return false;
}

bool cond2(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second < b.second)
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        pair<ll, ll> a[n];
        map<pair<int, int>, int> mp;
        pair<ll, ll> b[n];

        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            a[i] = {x, y};
            b[i] = {x, y};
            mp[{x, y}] = i + 1;
        }
        sort(a, a + n, cond);
        map<ll, ll> mp2;
        ll mi = a[0].second;
        mp2[0] = a[0].second;
        map<ll, ll> mp3;
        mp3[0] = mp[a[0]];
        for (int i = 1; i < n; i++)
        {
            if (a[i].second < mi)
            {
                mp3[i] = mp[a[i]];
            }
            else
            {

                mp3[i] = mp3[i - 1];
            }
            mi = min(a[i].second, mi);
            mp2[i] = mi;
        }
        int ans[n];
        memset(ans, -1, sizeof(ans));
        for (int i = 0; i < n; i++)
        {
            int x = b[i].first;
            int y = b[i].second;
            auto it = lower_bound(a, a + n, x, compare());
            int temp = it - a;
            if (temp != 0)
            {
                if (mp2[temp - 1] < y)
                {

                    ans[i] = mp3[temp - 1];
                }
            }
        }

        sort(a, a + n, cond2);
        mp2.clear();
        mi = a[0].first;
        mp2[0] = a[0].first;
        mp3.clear();
        mp3[0] = mp[a[0]];
        for (int i = 1; i < n; i++)
        {
            if (a[i].first < mi)
            {
                mp3[i] = mp[a[i]];
            }
            else
            {

                mp3[i] = mp3[i - 1];
            }
            mi = min(a[i].first, mi);
            mp2[i] = mi;
        }

        // memset(ans, -1, sizeof(ans));
        for (int i = 0; i < n; i++)
        {
            int x = b[i].first;
            int y = b[i].second;
            auto it = lower_bound(a, a + n, x, compare2());
            int temp = it - a;
            if (temp != 0)
            {
                if (mp2[temp - 1] < y)
                {

                    ans[i] = mp3[temp - 1];
                }
            }
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
