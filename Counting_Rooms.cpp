#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(int i, int j, map<pair<int, int>, int> &visited, int n, int m, string s[])
{
    if (visited[{i, j}] || i < 0 || j < 0 || i >= n || j >= m || s[i][j] == '#')
    {
        return;
    }
    visited[{i, j}]++;
    dfs(i + 1, j, visited, n, m, s);
    dfs(i - 1, j, visited, n, m, s);
    dfs(i, j + 1, visited, n, m, s);
    dfs(i, j - 1, visited, n, m, s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    map<pair<int, int>, int> visited;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[{i, j}] == 0 && s[i][j] == '.')
            {
                dfs(i, j, visited, n, m, s);
                c++;
            }
        }
    }
    cout << c << endl;
}
