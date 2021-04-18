#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int c[n + 2];
    vector<int> cl;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i + 1];
        cl.push_back(c[i + 1]);
    }
    sort(cl.begin(), cl.end());
    vector<int> graph[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    set<int> v[100001];
    for (int i = 1; i <= n; i++)
    {

        for (auto x : graph[i])
        {
            if (c[i] != c[x])
            {
                v[c[i]].insert(c[x]);
            }
        }
    }
    int ma = INT_MIN;
    int color = 0;

    for (auto i : cl)
    {
        if (ma < (int)v[i].size())
        {
            ma = (int)v[i].size();
            color = i;
        }
    }
    cout << color << endl;
}
