#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(vector<int> graph[], bool visited[], int k, bool &cond)
{
    if (visited[k])
    {
        return;
    }

    visited[k] = true;
    if (graph[k].size() != 2)
    {
        cond = false;
    }
    for (auto i : graph[k])
    {

        dfs(graph, visited, i, cond);
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
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        bool cond = true;
        if (!visited[i])
        {
            dfs(graph, visited, i, cond);
            if (cond == true)
            {

                c++;
            }
        }
    }
    cout << c << endl;
}
