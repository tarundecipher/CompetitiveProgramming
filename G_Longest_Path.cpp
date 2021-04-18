#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> graph[200001];
int memo[200001];
int dfs(int k)
{
    if (graph[k].size() == 0)
    {
        return 0;
    }
    if (memo[k] != -1)
    {
        return memo[k];
    }

    int ma = 0;

    for (auto i : graph[k])
    {
        ma = max(ma, 1 + dfs(i));
    }
    memo[k] = ma;
    return ma;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
    }
    bool visited[n + 1];

    int ma = 0;
    memset(memo, -1, sizeof(memo));
    for (int i = 1; i <= n; i++)
    {

        ma = max(ma, dfs(i));
    }
    cout << ma << endl;
}
