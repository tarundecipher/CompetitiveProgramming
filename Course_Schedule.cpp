#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> graph[(int)1e5 + 5];
vector<int> topo;
bool visited[(int)1e5 + 5];
bool recstack[(int)1e5 + 5];
void dfs(int node, bool &cond)
{
    if (visited[node])
    {
        return;
    }
    recstack[node] = true;
    visited[node] = true;
    for (auto i : graph[node])
    {
        if (recstack[i])
        {
            cond = true;
        }
        dfs(i, cond);
    }
    recstack[node] = false;
    topo.push_back(node);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
    }
    memset(visited, false, sizeof(false));
    bool cond = false;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, cond);
        }
    }
    if (cond)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        reverse(topo.begin(), topo.end());
        for (auto i : topo)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
