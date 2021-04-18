#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll graph[(ll)501][(ll)501];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, q;
    cin >> n >> m >> q;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (i == j)
            {
                graph[i][j] = 0;
            }
            else
            {
                graph[i][j] = (ll)1e18;
            }
        }
    }

    for (ll i = 0; i < m; i++)
    {
        ll t1, t2, w;
        cin >> t1 >> t2 >> w;
        graph[t1][t2] = min(w, graph[t1][t2]);
        graph[t2][t1] = min(w, graph[t2][t1]);
    }
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j]);
            }
        }
    }
    while (q--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        if (graph[t1][t2] >= (ll)1e18)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << graph[t1][t2] << endl;
        }
    }
}
