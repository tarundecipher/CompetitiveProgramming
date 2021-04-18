#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> graph[(ll)2e5 + 5];

ll parent[(ll)2e5 + 5][31];
ll level[(ll)2e5 + 5];
bool visited[(ll)2e5 + 5];

void dfs(int node, int par)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    if (par != -1)
    {
        level[node] = level[par] + 1;
    }
    for (auto i : graph[node])
    {

        dfs(i, node);
    }
}

ll lca(int a, int b, int &l)
{
    int d = abs(level[a] - level[b]);
    int res = 0;
    res += d;
    if (level[a] > level[b])
    {
        while (d)
        {
            int temp = log2(d);
            a = parent[a][temp];
            d -= (1 << temp);
        }
    }
    else if (level[a] < level[b])
    {
        while (d)
        {
            int temp = log2(d);
            b = parent[b][temp];
            d -= (1 << temp);
        }
    }

    for (int i = 31; i >= 0; i--)
    {
        if (parent[a][i] != -1 && parent[a][i] != parent[b][i])
        {
            a = parent[a][i];
            b = parent[b][i];
            res += (1 << i);
        }
    }
    l = parent[a][0];
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    memset(parent, -1, sizeof(parent));
    memset(level, 0, sizeof(level));
    for (ll i = 1; i <= n; i++)
    {
        ll temp;
        cin >> temp;
        graph[i].push_back(temp);

        parent[i][0] = temp;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1);
        }
    }

    for (ll j = 1; j < 31; j++)
    {
        for (ll i = 1; i <= n; i++)
        {

            ll temp = parent[i][j - 1];
            if (temp != -1)
            {
                parent[i][j] = parent[temp][j - 1];
            }
        }
    }

    while (m--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        int l = -1;
        int res = lca(t1, t2, l);

        cout << res << endl;
    }
}
