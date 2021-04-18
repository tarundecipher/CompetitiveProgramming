#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> graph[n + 1];
    map<pair<int, int>, int> weight;
    for (int i = 0; i < m; i++)
    {
        int t1, t2, w;
        cin >> t1 >> t2 >> w;
        graph[t1].push_back({t2, w});
        weight[{t1, t2}] = w;
    }
    priority_queue<pair<int, int>> q;
    int dist[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dist[i] = (int)1e9;
    }
    dist[1] = 0;
    q.push({0, 1});
    int parent[n + 1];
    memset(parent, 0, sizeof(parent));
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    while (!q.empty())
    {
        int node = q.top().second;
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
                parent[i.first] = node;
                dist[i.first] = dist[node] + i.second;
                q.push({-dist[i.first], i.first});
            }
        }
    }

    int node = n;

    vector<pair<int, int>> v;
    while (node != 1)
    {

        v.push_back({parent[node], node});
        node = parent[node];
    }
    int ma = 0;
    for (auto i : v)
    {
        ma = max(weight[i], ma);
    }
    // cout << ma << endl;
    dist[n] = dist[n] - ceil((double)ma / (double)2);
    cout << dist[n] << endl;
}
