#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int ma = INT_MIN;

int dfs(vector<int> graph[], bool visited[], int k, int &res)
{
    if (visited[k])
    {
        return 0;
    }
    visited[k] = true;

    int t = 0;
    if (graph[k].size() == 1)
    {

        return 1;
    }

    for (auto i : graph[k])
    {

        t = max(t, dfs(graph, visited, i, res));
    }
    res += t + 1;

    return t + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ma = INT_MIN;
        int n;
        cin >> n;
        vector<int> graph[n + 1];
        for (int i = 1; i <= n - 1; i++)
        {
            int temp;
            cin >> temp;
            graph[temp].push_back(i + 1);
            graph[i + 1].push_back(temp);
        }
        bool visited[n + 1];
        int subtree[n + 1];

        memset(visited, false, sizeof(visited));
        int res = 0;
        dfs(graph, visited, 1, res);
        cout << res << endl;
    }
}
