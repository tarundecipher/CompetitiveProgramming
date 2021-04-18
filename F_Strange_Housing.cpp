#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int color[(int)3e5 + 5];
int c = 0;
void dfs(bool visited[], vector<int> graph[], int k)
{
    if (visited[k])
    {
        return;
    }
    visited[k] = true;

    for (auto i : graph[k])
    {

        dfs(visited, graph, i);
    }
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> graph[n + 1];
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            graph[l].push_back(r);
            graph[r].push_back(l);
        }
        memset(color, -1, sizeof(color));
        bool visited[n + 1];
        memset(visited, false, sizeof(visited));
        bool cond = false;
        dfs(visited, graph, 1);
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == false)
            {
                cond = true;
                break;
            }
        }
        if (cond)
        {
            cout << "NO" << endl;
            continue;
        }
        // c = 0;
        queue<int> q;
        q.push(1);
        int depth[n + 1];
        memset(visited, false, sizeof(visited));
        memset(depth, 0, sizeof(depth));
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();

            if (depth[temp] % 2 == 1)
            {
                color[temp] = 1;
            }
            else
            {
                color[temp] = 0;
                // c++;
            }
            visited[temp] = true;
            for (auto i : graph[temp])
            {
                if (!visited[i])
                {

                    q.push(i);

                    depth[i] = depth[temp] + 1;
                }
            }
        }
        cout << "YES" << endl;
        // cout << c << endl;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (color[i] == 0)
            {
                ans.push_back(i);
            }
        }
        cout << ans.size() << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
