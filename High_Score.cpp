#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct edge
{
    ll t1, t2, w;
};

edge e[(ll)1e5 + 5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll t1, t2, w;
        cin >> t1 >> t2 >> w;
        e[i] = {t1, t2, -w};
    }
    ll dist[n + 1];
    for (ll i = 0; i <= n; i++)
    {
        dist[i] = (ll)1e15;
    }
    dist[1] = 0;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (dist[e[j].t1] >= (ll)1e15)
            {
                continue;
            }

            dist[e[j].t2] = min(dist[e[j].t2], dist[e[j].t1] + e[j].w);
        }
    }
    bool cond = false;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (dist[e[j].t1] >= (ll)1e15)
            {
                continue;
            }
            if (dist[e[j].t2] > dist[e[j].t1] + e[j].w)
            {
                dist[e[j].t2] = -(ll)1e17;
            }
        }
    }
    if (dist[n] <= -(ll)1e17)
    {
        cond = true;
    }

    if (cond)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << -dist[n] << endl;
    }
}
