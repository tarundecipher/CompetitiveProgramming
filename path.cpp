#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, char>> graph[7];
    for (int i = 0; i < 18; i++)
    {
        int t1, t2;
        char s;
        cin >> t1 >> t2 >> s;

        graph[t1].push_back({t2, s});
    }
    int dest;
    cin >> dest;
    int curr = 2;
    bool visited[7];
    memset(visited, false, sizeof(visited));
    queue<int> q;
    pair<int, char> ancestor[7];
    ancestor[curr] = {-1, 'a'};
    q.push(curr);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        visited[temp] = true;
        for (auto i : graph[temp])
        {
            if (!visited[i.first])
            {
                visited[i.first] = true;
                q.push(i.first);
                ancestor[i.first] = {temp, i.second};
            }
        }
    }
    vector<pair<int, char>> dir;
    int dest1 = dest;
    while (ancestor[dest1].first != -1)
    {
        dir.push_back(ancestor[dest1]);
        dest1 = ancestor[dest1].first;
    }

    reverse(dir.begin(), dir.end());
    dir.push_back({dest, 'S'});

    for (auto i : dir)
    {
        cout << i.first << " " << i.second << endl;
    }
}
