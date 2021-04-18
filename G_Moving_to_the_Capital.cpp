#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool visited[(int)2e5 + 5];
int depth[(int)2e5 + 5];
int dp[(int)2e5 + 5];
vector<int> graph[(int)2e5 + 5];
void dfs(int k)
{
    visited[k] = true;
    for (auto i : graph[k])
    {
        if (depth[i] <= depth[k])
        {
            continue;
        }
        if (!visited[i])
        {

            dfs(i);
        }
        dp[k] = min(dp[k], dp[i]);
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
        // memset(dp, -1, sizeof(dp));
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
        }
        queue<int> q;
        q.push(1);

        memset(visited, false, sizeof(visited));

        depth[1] = 0;
        for (int i = 2; i <= n; i++)
        {
            depth[i] = INT_MAX;
        }
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();
            visited[temp] = true;

            for (auto i : graph[temp])
            {
                depth[i] = min(depth[temp] + 1, depth[i]);
                if (!visited[i])
                {

                    q.push(i);
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            dp[i] = depth[i];
            for (auto k : graph[i])
            {
                dp[i] = min(dp[i], depth[k]);
            }
        }
        memset(visited, false, sizeof(visited));
        for (int i = 1; i <= n; i++)
        {
            if (visited[i])
            {
                continue;
            }
            dfs(i);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;
    }
}
