#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int parent[1000];

int find(int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = find(parent[node]);
}

void combine(int u, int v)
{
    int x = find(u);
    int y = find(v);

    if (x != y)
    {
        parent[y] = x;
    }
    // cout << x << " " << y << endl;
}

bool same(int u, int v)
{
    if (find(u) == find(v))
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < 26; i++)
    {
        parent[i] = i;
    }
    vector<pair<char, char>> ans;
    for (int i = 0; i < n; i++)
    {
        if (!same(s[i] - 'a', t[i] - 'a'))
        {
            combine(s[i] - 'a', t[i] - 'a');
            ans.push_back({s[i], t[i]});
        }
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
}
