#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> graph[(int)1e5 + 5];
vector<int> graph2[(int)1e5 + 5];
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

void dfs2(int node)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    for (auto i : graph2[node])
    {
        dfs2(i);
    }
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
        graph2[t2].push_back(t1);
    }
    memset(visited, false, sizeof(visited));

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    reverse(topo.begin(), topo.end());
    memset(visited, false, sizeof(visited));
    vector<int> ind;
    for (auto i : topo)
    {

        if (!visited[i])
        {
            ind.push_back(i);
            dfs2(i);
        }
    }

    if (ind.size() > 1)
    {
        cout << "NO" << endl;
        cout << ind[1] << " " << ind[0] << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
