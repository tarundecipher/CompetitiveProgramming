#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool visited[55][55];
set<pair<int, int>> st;
void dfs(pair<int, int> node, bool &cond, int n, int m, string a[])
{
    if (visited[node.first][node.second] || node.first < 0 || node.second < 0 || node.first > n || node.second > m)
    {
        return;
    }
    if (a[node.first][node.second] == '*')
    {
        return;
    }
    visited[node.first][node.second] = true;
    if (node.first == 0 || node.second == 0 || node.first == n - 1 || node.second == m - 1)
    {
        cond = true;
    }

    st.insert(node);
    dfs({node.first + 1, node.second}, cond, n, m, a);
    dfs({node.first - 1, node.second}, cond, n, m, a);
    dfs({node.first, node.second + 1}, cond, n, m, a);
    dfs({node.first, node.second - 1}, cond, n, m, a);
}

bool condi(set<pair<int, int>> p1, set<pair<int, int>> p2)
{
    if (p1.size() < p2.size())
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    string a[51];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    vector<set<pair<int, int>>> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            st.clear();
            bool cond = false;
            dfs({i, j}, cond, n, m, a);

            if (cond == false)
            {
                if (st.size() > 0)
                {
                    v.push_back(st);
                }
            }
            // cout << cond << " " << st.size() << endl;
        }
    }

    sort(v.begin(), v.end(), condi);
    int lake = v.size();
    for (int i = 0; i < lake - k; i++)
    {

        ans += v[i].size();
        for (auto j : v[i])
        {
            a[j.first][j.second] = '*';
        }
    }
    // cout << lake << endl;
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
