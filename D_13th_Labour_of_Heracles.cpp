#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
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
        pair<ll, ll> w[n + 1];
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll temp;
            cin >> temp;
            w[i] = {temp, i};
            sum += temp;
        }
        sort(w + 1, w + n + 1, cond);

        vector<ll> graph[n + 1];
        for (ll i = 0; i < n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        ll indegree[n + 1];
        memset(indegree, 0, sizeof(indegree));
        for (ll i = 1; i <= n; i++)
        {
            indegree[i] = graph[i].size() - 1;
        }
        vector<ll> ans;
        ans.push_back(sum);
        int p = n;
        for (ll i = 1; i < n - 1; i++)
        {
            while (indegree[w[p].second] <= 0)
            {

                p--;
                if (p == 1)
                {
                    break;
                }
            }
            pair<ll, ll> temp = w[p];

            sum += temp.first;
            indegree[temp.second]--;
            ans.push_back(sum);
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
