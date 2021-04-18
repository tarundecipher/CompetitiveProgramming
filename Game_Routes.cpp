#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> graph[(int)1e5 + 5];
int dp[(int)1e5 + 5];
const int M = 1e9 + 7;
int clc(int node, int n)
{
    if (node == n)
    {
        return 1;
    }
    if (dp[node] != -1)
    {
        return dp[node];
    }
    int a = 0;
    for (auto i : graph[node])
    {
        (a += clc(i, n)) %= M;
    }
    dp[node] = a;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
    }
    cout << clc(1, n) % M << endl;
}
