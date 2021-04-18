#include <bits/stdc++.h>
#define ll long long int

using namespace std;
bool cond = false;
map<pair<int, int>, int> mp;
int color[200000 + 1];
void dfs(vector<int> graph[], bool visited[], int k, int d, int anc, int c)
{

    if (visited[k])
    {
        if (color[anc] == color[k])
        {
            cond = true;
        }
        return;
    }
    visited[k] = true;
    color[k] = c;
    if (d % 2 == 0)
    {
        mp[{anc, k}] = 0;
        // mp[{k, anc}] = 1;
    }
    else
    {
        mp[{anc, k}] = 1;
        // mp[{k, anc}] = 0;
    }
    for (auto i : graph[k])
    {
        dfs(graph, visited, i, d + 1, k, c ^ 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> graph[n + 1];
    vector<pair<int, int>> final;
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
        final.push_back({t1, t2});
    }
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    dfs(graph, visited, 1, 0, -1, 0);
    if (cond)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (auto i : final)
    {
        cout << mp[{i.first, i.second}];
    }
    cout << endl;
}
