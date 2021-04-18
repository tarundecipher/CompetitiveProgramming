#include <bits/stdc++.h>
#define ll long long int
using namespace std;

pair<int, int> dfs(vector<int> graph[], bool visited[], int k, int color[], int &res, int R, int B)
{
    if (visited[k])
    {
        return {0, 0};
    }
    visited[k] = true;
    int r = 0;
    int b = 0;
    if (color[k] == 1)
    {
        r++;
    }
    else if (color[k] == 2)
    {
        b++;
    }
    for (auto i : graph[k])
    {
        pair<int, int> temp = dfs(graph, visited, i, color, res, R, B);
        r += temp.first;
        b += temp.second;
    }
    if (r == R && b == 0)
    {
        res++;
    }
    else if (r == 0 && b == B)
    {
        res++;
    }
    return {r, b};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int color[n + 1];
    int R = 0, B = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> color[i + 1];
        if (color[i + 1] == 1)
        {
            R++;
        }
        else if (color[i + 1] == 2)
        {
            B++;
        }
    }
    vector<int> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int res = 0;
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    dfs(graph, visited, 1, color, res, R, B);
    cout << res << endl;
}
