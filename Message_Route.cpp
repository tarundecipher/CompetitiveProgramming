#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> graph[n + 2];
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    queue<int> q;
    int parent[n + 2];
    memset(parent, 0, sizeof(parent));
    bool visited[n + 2];
    memset(visited, false, sizeof(visited));
    // int distance[n + 2];
    // memset(distance, 0, sizeof(distance));
    bool cond = false;
    q.push(1);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        if (node == n)
        {
            cond = true;
            break;
        }

        for (auto i : graph[node])
        {

            if (visited[i] == false)
            {
                visited[i] = true;
                q.push(i);
                parent[i] = node;
                // distance[i] = distance[node] + 1;
            }
        }
    }

    if (cond)
    {
        // cout << distance[n] << endl;
        int node = n;
        vector<int> ans;
        while (node != 1)
        {
            ans.push_back(node);
            node = parent[node];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
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
