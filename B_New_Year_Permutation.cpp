#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(vector<int> graph[], bool visited[], int k, set<int> &st)
{
    if (visited[k])
    {
        return;
    }
    visited[k] = true;
    st.insert(k);
    for (auto i : graph[k])
    {
        dfs(graph, visited, i, st);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int p[n + 1];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    string a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    vector<int> graph[n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '1')
            {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    bool visited[n];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            set<int> st;

            dfs(graph, visited, i, st);
            vector<int> temp;
            for (auto x : st)
            {
                temp.push_back(p[x]);
            }
            sort(temp.begin(), temp.end());
            int pos = 0;
            for (auto x : st)
            {
                // cout << temp[pos] << " " << x << endl;

                p[x] = temp[pos];
                pos++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}
