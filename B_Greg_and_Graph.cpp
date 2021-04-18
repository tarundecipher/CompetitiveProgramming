#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int graph[501][501];
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            graph[i][j] = 1e9;
        }
    }

    vector<int> ignore;
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        ignore.push_back(temp);
    }
    reverse(ignore.begin(), ignore.end());

    vector<int> ans;
    // vector<int> index;
    for (auto i : ignore)
    {
        visited[i - 1] = true;
        for (int j = 0; j < n; j++)
        {
            if (visited[j] == true)
            {
                graph[i - 1][j] = min(graph[i - 1][j], a[i - 1][j]);
            }
        }
        // index.push_back(i - 1);
        for (int j = 0; j < n; j++)
        {
            if (visited[j] == true)
            {
                graph[j][i - 1] = min(graph[j][i - 1], a[j][i - 1]);
            }
        }
        int res = 0;
        // for (auto i : index)
        // { //to optimize
        for (int i1 = 0; i1 < n; i1++)
        {
            for (int j1 = 0; j1 < n; j1++)
            {

                graph[i1][i - 1] = min(graph[i1][j1] + graph[j1][i - 1], graph[i1][i - 1]);
                graph[i - 1][i1] = min(graph[i - 1][j1] + graph[j1][i1], graph[i - 1][i1]);
            }
        }
        for (int i1 = 0; i1 < n; i1++)
        {
            for (int j1 = 0; j1 < n; j1++)
            {
                graph[i1][j1] = min(graph[i1][i - 1] + graph[i - 1][j1], graph[i1][j1]);
            }
        }
        // }
        for (int i1 = 0; i1 < n; i1++)
        {
            for (int j1 = 0; j1 < n; j1++)
            {

                if (graph[i1][j1] < 1e9)
                {
                    res += graph[i1][j1];
                }

                // cout << graph[i1][j1] << " ";
            }
            // cout << endl;
        }
        // cout << endl;
        ans.push_back(res);
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
