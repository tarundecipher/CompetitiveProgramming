#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> graph[(ll)1e5 + 5];
ll parent[(ll)1e5 + 5];
struct edge
{
    ll a, b, w;
};
bool cond(edge p1, edge p2)
{
    if (p1.w < p2.w)
    {
        return true;
    }
    return false;
}
ll siz[(ll)1e5 + 5];

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
        if (siz[a1] > siz[b1])
        {
            parent[b1] = a1;
            siz[a1] += siz[b1];
        }
        else
        {
            parent[a1] = b1;
            siz[b1] += siz[a1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    edge a[m + 1];
    for (ll i = 0; i < m; i++)
    {
        ll a1, b1, w1;
        cin >> a1 >> b1 >> w1;
        a[i].a = a1;
        a[i].b = b1;
        a[i].w = w1;
    }
    sort(a, a + m, cond);
    for (ll i = 0; i <= n; i++)
    {
        parent[i] = i;
        siz[i] = 1;
    }
    ll cost = 0;
    for (ll i = 0; i < m; i++)
    {

        if (find(a[i].a) != find(a[i].b))
        {
            uni(a[i].a, a[i].b);

            cost += a[i].w;
        }
    }
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (parent[i] == i)
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {

        cout << cost << endl;
    }
}
