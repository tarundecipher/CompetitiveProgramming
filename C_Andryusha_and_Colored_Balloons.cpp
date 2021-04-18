#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int color[200001];

void dfs(vector<int> graph[], bool visited[], int k, int ma, int prev1)
{
    if (visited[k])
    {
        return;
    }
    visited[k] = true;
    int p = 1;
    for (auto i : graph[k])
    {
        if (!visited[i])
        {
            for (int j = p; j <= ma; j++)
            {
                if (j != prev1 && j != color[k])
                {

                    color[i] = j;
                    p = j + 1;
                    break;
                }
            }
        }
        dfs(graph, visited, i, ma, color[k]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> graph[n + 1];
    int ma = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        ma = max((int)graph[x].size(), max((int)graph[y].size(), ma));
    }
    ma++;
    cout << ma << endl;
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    color[1] = 1;
    dfs(graph, visited, 1, ma, -1);

    for (int i = 1; i <= n; i++)
    {
        cout << color[i] << ' ';
    }

    cout << endl;
}
