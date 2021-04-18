#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int subtree[200001];
int num[200001];
void dfs2(vector<pair<int, int>> graph[], bool visited[], int k, int sum, int &ans)
{

    visited[k] = true;
    for (auto i : graph[k])
    {
        if (sum + i.second > num[i.first] && !visited[i.first])
        {
            // cout << i.first << endl;
            ans += subtree[i.first];
        }
        else
        {
            if (!visited[i.first])
            {
                dfs2(graph, visited, i.first, max(0, sum + i.second), ans);
            }
        }
    }
}

int dfs(vector<pair<int, int>> graph[], bool visited[], int k)
{

    visited[k] = true;
    int sum = 1;
    for (auto i : graph[k])
    {
        if (!visited[i.first])
        {
            sum += dfs(graph, visited, i.first);
        }
    }
    subtree[k] = sum;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i + 1];
    }
    vector<pair<int, int>> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[i + 2].push_back({a, b});
        graph[a].push_back({i + 2, b});
    }
    memset(subtree, 0, sizeof(subtree));
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));

    dfs(graph, visited, 1);

    int ans = 0;
    memset(visited, false, sizeof(visited));
    dfs2(graph, visited, 1, 0, ans);

    cout << ans << endl;
}
