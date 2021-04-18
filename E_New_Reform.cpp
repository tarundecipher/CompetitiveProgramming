#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(vector<int> graph[], bool visited[], int k, int par, bool &cond)
{
    if (visited[k])
    {
        return;
    }
    visited[k] = true;
    for (auto i : graph[k])
    {
        if (i != par && !visited[i])
        {
            dfs(graph, visited, i, k, cond);
        }
        else if (i != par && visited[i])
        {
            cond = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> graph[n + 1];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool cond = false;
            dfs(graph, visited, i, -1, cond);
            // cout << cond << " " << i << endl;
            if (!cond)
            {
                res++;
            }
        }
    }
    cout << res << endl;
}
