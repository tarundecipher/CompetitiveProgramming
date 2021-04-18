#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(pair<int, int> v, map<pair<int, int>, int> &visited, int &output, int n, int m, string s[], bool &cond)
{
    if (v.first >= n || v.first < 0 || v.second >= m || v.second < 0)
    {
        return;
    }
    if (visited[v])
    {
        return;
    }
    visited[v]++;
    if (s[v.first][v.second] == '#')
    {
        return;
    }

    if (s[v.first][v.second] == 'G')
    {

        output++;
    }
    if (v.first == n - 1 && v.second == m - 1)
    {
        cond = true;
    }
    dfs({v.first - 1, v.second}, visited, output, n, m, s, cond);
    dfs({v.first + 1, v.second}, visited, output, n, m, s, cond);
    dfs({v.first, v.second - 1}, visited, output, n, m, s, cond);
    dfs({v.first, v.second + 1}, visited, output, n, m, s, cond);
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
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        bool cond = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (s[i][j] == 'B')
                {
                    if (i == n - 1 && j == m - 1)
                    {
                        cond = true;
                    }
                    if (i - 1 >= 0 && s[i - 1][j] == 'G')
                    {
                        cond = true;
                    }
                    if (j - 1 >= 0 && s[i][j - 1] == 'G')
                    {
                        cond = true;
                    }
                    if (j + 1 < m && s[i][j + 1] == 'G')
                    {
                        cond = true;
                    }
                    if (i + 1 < n && s[i + 1][j] == 'G')
                    {
                        cond = true;
                    }
                }
            }
        }

        if (cond)
        {
            cout << "No" << endl;
        }
        else
        {
            int i1 = -1;
            int i2 = -1;
            int c = 0;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (s[i][j] == 'G')
                    {

                        i1 = i;
                        i2 = j;
                        c++;
                    }
                    if (s[i][j] == 'B')
                    {
                        // cout << i << ' ' << j << endl;
                        if (i - 1 >= 0 && s[i - 1][j] == '.')
                        {
                            s[i - 1][j] = '#';
                        }
                        if (j - 1 >= 0 && s[i][j - 1] == '.')
                        {
                            s[i][j - 1] = '#';
                        }
                        if (j + 1 < m && s[i][j + 1] == '.')
                        {
                            s[i][j + 1] = '#';
                        }
                        if (i + 1 < n && s[i + 1][j] == '.')
                        {
                            s[i + 1][j] = '#';
                        }
                    }
                }
            }

            if (i1 != -1 && i2 != -1)
            {
                map<pair<int, int>, int> visited;
                int output = 0;
                bool cond3 = false;
                dfs({i1, i2}, visited, output, n, m, s, cond3);
                // cout << output << " " << c << " " << cond3 << endl;
                if (output == c && cond3)
                {
                    cout << "Yes" << endl;
                }
                else
                {

                    cout << "No" << endl;
                }
            }
            else
            {
                // cout << i1 << " " << i2 << endl;
                // cout << 'a' << " " << c << endl;
                cout << "Yes" << endl;
            }
        }
    }
}
