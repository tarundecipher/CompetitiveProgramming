#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> graph[(int)1e5 + 5];
bool visited[(int)1e5 + 5];
int en = -1;
int parent[(int)1e5 + 5];
void dfs(int node, int cnt, int m, int pr)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;

    parent[node] = pr;
    for (auto i : graph[node])
    {
        if (i != pr && i == 1)
        {
            cout << i << " " << pr << " " << cnt << endl;
            if (cnt == m - 1)
            {
                en = i;
            }
        }
        dfs(i, cnt + 1, m, node);
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
        graph[t2].push_back(t1);
    }
    memset(visited, 0, sizeof(visited));
    dfs(1, 0, m, 0);
    cout << en << endl;
}
