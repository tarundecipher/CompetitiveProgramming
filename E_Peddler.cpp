#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool visited[(int)3e5 + 5];
vector<int> graph[(int)3e5 + 5];
int a[(int)3e5 + 5];
ll dp[(int)3e5 + 5];
void dfs(int k)
{

    visited[k] = true;

    for (auto i : graph[k])
    {
        if (!visited[i])
        {
            dfs(i);
        }
        dp[k] = min(dp[k], min((ll)a[i], dp[i]));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;

        cin >> x >> y;

        graph[x].push_back(y);
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = (int)1e18;
    }
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {

            dfs(i);
        }
    }
    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ans = max((ll)ans, dp[i] - (ll)a[i]);
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;

    cout << ans << endl;
}
