#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<pair<ll, ll>> graph[(ll)1e5 + 5];
const ll M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll t1, t2, w;
        cin >> t1 >> t2 >> w;
        graph[t1].push_back({t2, w});
    }
    priority_queue<pair<ll, ll>> q;
    q.push({0, 1});
    ll dist[(ll)1e5 + 5];
    for (ll i = 0; i <= n; i++)
    {
        dist[i] = (ll)1e18;
    }
    dist[1] = 0;
    ll cnt[(ll)1e5 + 5];
    ll min_f[(ll)1e5 + 5];
    ll max_f[(ll)1e5 + 5];

    for (ll i = 0; i <= n; i++)
    {
        cnt[i] = 1;
    }
    while (!q.empty())
    {
        ll node = q.top().second;
        ll weight = q.top().first;
        q.pop();
        for (auto i : graph[node])
        {
            if (dist[i.first] > -weight + i.second)
            {
                dist[i.first] = -weight + i.second;
                cnt[i.first] = cnt[node];
                q.push({-dist[i.first], i.first});
                min_f[i.first] = min_f[node] + 1;
                max_f[i.first] = max_f[node] + 1;
            }
            else if (dist[i.first] == -weight + i.second)
            {
                (cnt[i.first] += cnt[node]) %= M;
                min_f[i.first] = min(min_f[i.first], min_f[node] + 1);
                max_f[i.first] = max(max_f[i.first], max_f[node] + 1);
            }
        }
    }
    cout << dist[n] << " " << cnt[n] << " " << min_f[n] << " " << max_f[n] << endl;
}
