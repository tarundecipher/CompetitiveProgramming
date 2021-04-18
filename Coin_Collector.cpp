#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int score[(int)1e5 + 5];
vector<int> graph[(int)1e5 + 5];
vector<int> graph2[(int)1e5 + 5];
int parent[(int)1e5 + 5];

vector<int> topo;
int score2[(int)1e5 + 5];
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

void dfs2(int node, int &cnt, int node2)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    cnt += score[node];
    parent[node] = node2;
    for (auto i : graph2[node])
    {
        dfs2(i, cnt, node2);
    }
}
int dp[(int)1e5 + 5];
int dfs3(int node)
{
    if (visited[node])
    {
        return 0;
    }
    visited[node] = true;
    if (dp[parent[node]] != -1)
    {
        return dp[parent[node]];
    }
    int a = 0;
    if (!visited[parent[node]])
    {
        a = score2[parent[node]];
    }

    for (auto i : graph[node])
    {
        a = max(a + dfs3(i), a);
    }
    dp[parent[node]] = a;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
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
        int cnt = 0;
        if (!visited[i])
        {
            dfs2(i, cnt, i);
            score2[i] = cnt;
        }
    }
    memset(dp, -1, sizeof(dp));
    int temp = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        temp = max(temp, dfs3(i));
    }
    cout << temp << endl;
}
