#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> graph[(ll)2e5 + 5];

ll parent[(ll)2e5 + 5][31];

ll find(ll a, ll d)
{
    while (d)
    {
        ll temp = log2(d);
        a = parent[a][temp];
        d -= (1 << temp);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    memset(parent, -1, sizeof(parent));
    for (ll i = 1; i <= n; i++)
    {
        ll temp;
        cin >> temp;
        graph[i].push_back(temp);
        parent[i][0] = temp;
    }

    // cout << parent[3][0] << endl;
    // cout << parent[1][0] << endl;
    // cout << parent[4][0] << endl;
    for (ll j = 1; j < 31; j++)
    {
        for (ll i = 1; i <= n; i++)
        {

            ll temp = parent[i][j - 1];
            if (temp != -1)
            {
                parent[i][j] = parent[temp][j - 1];
            }
            // cout << i << " " << j << " " << parent[4][0] << endl;
            // cout << i << " " << j << " " << parent[i][j] << " " << parent[4][j - 1] << endl;
        }
    }

    // cout << lca(7, 6) << endl;
    // cout << parent[4][0] << endl;
    // cout << find(4, 1) << endl;

    while (m--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        cout << find(t1, t2) << endl;
    }
}
