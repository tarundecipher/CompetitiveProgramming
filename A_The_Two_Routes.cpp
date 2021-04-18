#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> rail[n + 1];
    vector<int> bus[n + 1];
    int arr[401][401];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        rail[v].push_back(u);
        rail[u].push_back(v);
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!arr[i][j])
            {
                bus[i].push_back(j);
                bus[j].push_back(i);
            }
        }
    }
    int dist[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[1] = 0;
    queue<int> qr;
    qr.push(1);
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));
    while (!qr.empty())
    {
        int node = qr.front();
        qr.pop();

        for (auto i : rail[node])
        {
            if (!vis[i])
            {
                vis[i] = true;
                dist[i] = min(dist[i], dist[node] + 1);
                qr.push(i);
            }
        }
    }

    int dist2[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dist2[i] = INT_MAX;
    }
    dist2[1] = 0;
    queue<int> qr2;
    qr2.push(1);
    bool vis2[n + 1];
    memset(vis2, false, sizeof(vis2));
    while (!qr2.empty())
    {
        int node = qr2.front();
        qr2.pop();

        for (auto i : bus[node])
        {
            if (!vis2[i])
            {
                vis2[i] = true;
                dist2[i] = min(dist2[i], dist2[node] + 1);
                qr2.push(i);
            }
        }
    }
    if (max(dist[n], dist2[n]) == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(dist[n], dist2[n]) << endl;
    }
}
