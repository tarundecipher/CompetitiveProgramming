#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(vector<int> graph[], bool visited[], int k, int color[], set<int> &st)
{
    if (visited[k])
    {
        return;
    }
    visited[k] = true;

    st.insert(color[k]);

    for (auto i : graph[k])
    {
        dfs(graph, visited, i, color, st);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> graph[n + 1];
    int a = -1, b = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int color[n + 1];
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;

        color[i + 1] = c;
    }

    for (int i = 1; i <= n; i++)
    {
        bool condi = true;
        for (auto x : graph[i])
        {
            if (color[x] != color[i])
            {
                condi = false;
                a = x;
                b = i;
                break;
            }
        }
        if (condi == false)
        {
            break;
        }
    }

    if (a == -1)
    {
        cout << "YES" << endl;
        cout << 1 << endl;
        return 0;
    }

    bool cond1 = true;
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    visited[a] = true;
    for (auto x : graph[a])
    {
        set<int> st;

        dfs(graph, visited, x, color, st);
        // cout << a << endl;
        // for (auto i : st)
        // {
        //     cout << i << endl;
        // }
        if (st.size() > 1)
        {
            cond1 = false;
            break;
        }
    }
    bool cond2 = true;
    if (cond1 == false)
    {
        memset(visited, false, sizeof(visited));
        visited[b] = true;
        for (auto x : graph[b])
        {
            set<int> st;

            dfs(graph, visited, x, color, st);

            if (st.size() > 1)
            {
                cond2 = false;
                break;
            }
        }
    }

    if (cond1 == true || cond2 == true)
    {
        cout << "YES" << endl;
        if (cond1 == true)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
