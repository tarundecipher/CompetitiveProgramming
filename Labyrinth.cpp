#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int visited[(int)1e3 + 3][(int)1e3 + 3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string s[n];
    pair<int, int> start, end;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'A')
            {
                start.first = i;
                start.second = j;
            }
            else if (s[i][j] == 'B')
            {
                end.first = i;
                end.second = j;
            }
        }
    }

    map<pair<int, int>, pair<char, pair<int, int>>> mp;
    memset(visited, false, sizeof(visited));
    queue<pair<int, int>> q;
    q.push(start);
    bool cond = false;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        if (visited[node.first][node.second])
        {
            continue;
        }
        visited[node.first][node.second]++;
        if (s[node.first][node.second] == 'B')
        {
            cond = true;
            break;
        }

        if (s[node.first][node.second] != '#')
        {
            if (node.first + 1 < n && s[node.first + 1][node.second] != '#' && visited[node.first + 1][node.second] == 0)
            {
                q.push({node.first + 1, node.second});
                mp[{node.first + 1, node.second}] = {'D', node};
            }
            if (node.first - 1 >= 0 && s[node.first - 1][node.second] != '#' && visited[node.first - 1][node.second] == 0)
            {
                q.push({node.first - 1, node.second});
                mp[{node.first - 1, node.second}] = {'U', node};
            }
            if (node.second - 1 >= 0 && s[node.first][node.second - 1] != '#' && visited[node.first][node.second - 1] == 0)
            {
                q.push({node.first, node.second - 1});
                mp[{node.first, node.second - 1}] = {'L', node};
            }
            if (node.second + 1 < m && s[node.first][node.second + 1] != '#' && visited[node.first][node.second + 1] == 0)
            {
                q.push({node.first, node.second + 1});
                mp[{node.first, node.second + 1}] = {'R', node};
            }
        }
    }
    if (cond)
    {

        string s1 = "";
        n = 10;
        while (end != start)
        {
            n--;
            s1 += mp[end].first;
            end = mp[end].second;
        }
        reverse(s1.begin(), s1.end());
        cout << "YES" << endl;
        cout << s1.length() << endl;
        cout << s1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
