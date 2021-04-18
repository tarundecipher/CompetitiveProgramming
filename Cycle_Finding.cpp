#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct edges
{
    ll t1, t2, w;
};

int parent[(int)2505];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    edges e[m + 1];
    for (ll i = 0; i < m; i++)
    {
        ll t1, t2, w;
        cin >> t1 >> t2 >> w;
        e[i] = {t1, t2, w};
    }
    ll dist[n + 1];
    for (ll i = 0; i <= n; i++)
    {
        dist[i] = (ll)1e16;
    }
    dist[1] = 0;
    ll start = -1;
    // memset(parent, -1, sizeof(parent));
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {

            if (dist[e[j].t2] > dist[e[j].t1] + e[j].w)
            {
                parent[e[j].t2] = e[j].t1;

                dist[e[j].t2] = dist[e[j].t1] + e[j].w;
            }
        }
    }
    bool cond = false;
    for (ll j = 0; j < m; j++)
    {

        if (dist[e[j].t2] > dist[e[j].t1] + e[j].w)
        {
            parent[e[j].t2] = e[j].t1;
            start = e[j].t2;
            cond = true;
            break;
        }
    }

    if (cond)
    {

        int temp = start;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            start = parent[start];
        }

        for (int v = start;; v = parent[v])
        {

            ans.push_back(v);
            if (v == start && ans.size() > 1)
                break;
        }
        cout << "YES" << endl;
        reverse(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
