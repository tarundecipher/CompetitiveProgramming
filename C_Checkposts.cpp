#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll cost[(ll)1e5 + 5];
vector<ll> graph[(ll)1e5 + 5];
bool visited[(ll)1e5 + 5];
vector<ll> topo;
vector<ll> trans[(ll)1e5 + 5];
ll parent[(ll)1e5 + 5];
ll siz[(ll)1e5 + 5];
vector<ll> comp[(ll)1e5 + 5];

// ll mi[(ll)1e5 + 5];
ll find(ll a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = find(parent[a]);
}

void uni(ll a, ll b)
{
    ll a1 = find(a);
    ll b1 = find(b);
    if (a1 != b1)
    {
        if (siz[a1] < siz[b1])
        {
            parent[a1] = b1;
            siz[a1] += siz[b1];
        }
        else
        {
            parent[b1] = a1;
            siz[b1] += siz[a1];
        }
    }
}

void dfs(ll node)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    for (auto i : graph[node])
    {
        dfs(i);
    }
    topo.push_back(node);
}

void dfs2(ll node, ll par)
{
    if (visited[node])
    {
        return;
    }
    // cout << node << par << endl;
    if (par != -1)
    {
        uni(par, node);
    }
    visited[node] = true;
    for (auto i : trans[node])
    {
        dfs2(i, node);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> cost[i + 1];
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
        trans[t2].push_back(t1);
    }

    memset(visited, false, sizeof(visited));
    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    memset(visited, false, sizeof(visited));
    for (ll i = 0; i <= n; i++)
    {
        parent[i] = i;
        siz[i] = 1;
    }
    ll c = 0;
    vector<ll> ind;
    reverse(topo.begin(), topo.end());
    for (auto i : topo)
    {
        if (!visited[i])
        {
            dfs2(i, -1);
            c++;
            ind.push_back(find(i));
        }
    }
    for (ll i = 0; i <= n; i++)
    {
        comp[parent[i]].push_back(i);
    }
    ll res = 0, res2 = 1;
    ll M = 1e9 + 7;
    for (auto i : ind)
    {
        map<ll, ll> mp;
        for (auto j : comp[i])
        {
            mp[cost[j]]++;
        }
        res += (*mp.begin()).first;
        (res2 *= (*mp.begin()).second) %= M;
    }

    cout << res << " " << res2 << endl;
}
