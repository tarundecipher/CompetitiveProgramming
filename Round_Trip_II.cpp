#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> graph[(int)1e5 + 5];
bool recstack[(int)1e5 + 5];
int parent[(int)1e5 + 5];
int start;
int e;

bool dfs(int node, bool visited[], int p)
{
    if (visited[node])
    {
        return false;
    }
    recstack[node] = true;
    parent[node] = p;
    visited[node] = true;
    for (auto i : graph[node])
    {
        if (recstack[i] == true)
        {
            start = i;
            e = node;
            return true;
        }
        else
        {

            if (dfs(i, visited, node))
            {
                return true;
            }
        }
    }
    recstack[node] = false;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    start = -1;
    e = -1;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
    }
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    memset(recstack, false, sizeof(recstack));
    bool cond = false;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, visited, -1))
            {
                break;
            }
        }
    }

    // cout << parent[9] << endl;
    if (start != -1)
    {
        // cout << start << " " << e << endl;
        vector<int> ans;

        while (e != start)
        {
            ans.push_back(e);
            e = parent[e];
        }

        ans.push_back(start);
        reverse(ans.begin(), ans.end());
        ans.push_back(start);
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
