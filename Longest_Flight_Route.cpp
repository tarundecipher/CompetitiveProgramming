#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> graph[(ll)1e5 + 5];
ll parent[(ll)1e5 + 5];
ll dist[(ll)1e5 + 5];
vector<int> topo;
bool visited[(int)1e5 + 5];

void dfs(int node)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    for (auto i : graph[node])
    {
        dfs(i);
    }
    topo.push_back(node);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(visited, false, sizeof(visited));
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
    }

    for (ll i = 0; i <= n; i++)
    {
        dist[i] = INT_MIN;
    }
    dist[1] = 0;

    memset(parent, -1, sizeof(parent));
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    reverse(topo.begin(), topo.end());

    for (auto i : topo)
    {
        for (auto j : graph[i])
        {
            if (dist[j] < dist[i] + 1)
            {
                dist[j] = dist[i] + 1;
                parent[j] = i;
            }
        }
    }
    // cout << dist[n] << endl;

    ll node = n;
    vector<ll> ans;
    while (node != -1)
    {
        ans.push_back(node);
        node = parent[node];
    }
    if (ans[ans.size() - 1] != 1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
    // cout << dist[5] << endl;
}
