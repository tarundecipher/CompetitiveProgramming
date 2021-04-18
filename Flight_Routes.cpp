#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> graph[n + 5];
    for (ll i = 0; i < m; i++)
    {
        ll t1, t2, w;
        cin >> t1 >> t2 >> w;
        graph[t1].push_back({t2, w});
        // cout << graph[t1].size() << "  " << t1 << endl;
    }

    priority_queue<pair<ll, ll>> q;
    ll dist[n + 1][k];

    memset(dist, 1, sizeof(dist));
    for (ll j = 0; j < k; j++)
    {
        dist[0][j] = 0;
    }

    q.push({0, 1});
    while (!q.empty())
    {
        ll node = q.top().second;
        ll weight = q.top().first;
        // cout << node << " " << weight << endl;
        q.pop();

        if (dist[node][k - 1] < -weight)
        {
            continue;
        }
        for (auto i : graph[node])
        {
            // cout << dist[i.first][k - 1] << ' ' << -weight + i.second << endl;
            if (dist[i.first][k - 1] > -weight + i.second)
            {
                dist[i.first][k - 1] = -weight + i.second;
                q.push({-dist[i.first][k - 1], i.first});
                sort(dist[i.first], dist[i.first] + k);
            }
        }
    }
    for (ll i = 0; i < k; i++)
    {
        cout << dist[n][i] << " ";
    }
}
