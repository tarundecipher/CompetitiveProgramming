#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<pair<ll, ll>> graph[(ll)1e5 + 5];
ll dist[(ll)1e5 + 5];

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
        // graph[t2].push_back({t1, w});
    }
    priority_queue<pair<ll, ll>> q;
    // memset(dist, 0, sizeof(dist));
    for (ll i = 0; i <= n; i++)
    {
        dist[i] = (ll)1e18;
    }
    dist[1] = 0;
    q.push({0, 1});
    bool visited[(ll)1e5 + 5];
    memset(visited, false, sizeof(visited));
    while (!q.empty())
    {
        ll node = q.top().second;

        q.pop();
        if (visited[node])
        {
            continue;
        }
        visited[node] = true;
        for (auto i : graph[node])
        {
            if (dist[i.first] > dist[node] + i.second)
            {
                dist[i.first] = dist[node] + i.second;
                q.push({-dist[i.first], i.first});
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}
