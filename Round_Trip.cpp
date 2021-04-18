#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> graph[(int)1e5 + 5];

int parent[(int)1e5 + 5];
int visited[(int)1e5 + 5];
int start;
int end1;
bool dfs(int node, int p)
{
    if (visited[node])
    {
        return false;
    }
    parent[node] = p;
    visited[node] = true;
    for (auto i : graph[node])
    {
        if (visited[i] && parent[node] != i)
        {
            start = i;
            end1 = node;
            return true;
        }
        else
        {
            if (dfs(i, node))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    end1 = -1;
    start = -1;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    memset(visited, false, sizeof(visited));

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, -1))
            {
                break;
            }
        }
    }
    // cout << start << " " << end1 << endl;
    if (start != -1)
    {
        vector<int> ans;
        int temp = end1;
        while (end1 != start)
        {
            ans.push_back(end1);
            end1 = parent[end1];
        }
        ans.push_back(start);
        ans.push_back(temp);
        cout << ans.size() << endl;

        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
