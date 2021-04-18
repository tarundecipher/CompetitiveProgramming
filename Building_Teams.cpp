#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int color[(int)1e5 + 5];

void dfs(vector<int> graph[], int node, bool visited[], bool &cond)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    for (auto i : graph[node])
    {
        if (color[i] == 0)
        {
            if (color[node] == 1)
            {
                color[i] = 2;
            }
            else
            {
                color[i] = 1;
            }
            dfs(graph, i, visited, cond);
        }
        else if (color[i] == color[node])
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
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    bool cond = false;

    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
        {
            color[i] = 1;
            dfs(graph, i, visited, cond);
        }
    }
    if (cond)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << color[i] << " ";
        }
        cout << endl;
    }
}
