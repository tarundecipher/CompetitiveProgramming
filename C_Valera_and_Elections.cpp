#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> st;
int dfs(vector<pair<int, int>> graph[], bool visited[], int k)
{
    if (visited[k])
    {

        return 0;
    }

    visited[k] = true;
    int sum = 0;
    for (auto i : graph[k])
    {
        if (!visited[i.first])
        {
            int temp = dfs(graph, visited, i.first);
            if (i.second == 2)
            {
                if (temp == 0)
                {
                    st.push_back(i.first);
                }
                temp++;
            }
            sum += temp;
        }
    }
    // cout << sum << endl;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, t;
        cin >> a >> b >> t;
        graph[a].push_back({b, t});
        graph[b].push_back({a, t});
    }
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    int res = -1;
    dfs(graph, visited, 1);
    cout << st.size() << endl;
    for (auto x : st)
    {
        cout << x << " ";
    }
    cout << endl;
}
