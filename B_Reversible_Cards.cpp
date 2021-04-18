#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> graph[400001];

void dfs(int k, bool visited[], int par, bool &cond, int &si)
{
    if (visited[k])
    {
        return;
    }
    si++;
    visited[k] = true;
    for (auto i : graph[k])
    {
        if (i != par && visited[i] == true)
        {
            cond = true;
        }

        else
        {
            dfs(i, visited, k, cond, si);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    pair<int, int> a[t];
    for (int i = 0; i < t; i++)
    {
        int a1, b;
        cin >> a1 >> b;
        graph[a1].push_back(b);
        graph[b].push_back(a1);
        a[i] = {a1, b};
    }
    bool visited[400001];
    memset(visited, false, sizeof(visited));
    int ans = 0;
    for (auto i : a)
    {
        if (!visited[i.first])
        {
            int si = 0;
            bool cond = false;
            dfs(i.first, visited, -1, cond, si);
            // cout << cond << " " << i.first << " " << si << endl;
            if (cond)
            {
                ans += si;
            }
            else
            {
                ans += si - 1;
            }
        }
        if (!visited[i.second])
        {
            int si = 0;
            bool cond = false;
            dfs(i.second, visited, -1, cond, si);
            // cout << cond << " " << i.second << " " << si << endl;
            if (cond)
            {
                ans += si;
            }
            else
            {
                ans += si - 1;
            }
        }
    }
    cout << ans << endl;
}
