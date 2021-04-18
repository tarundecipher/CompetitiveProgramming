#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct node
{
    int val = 1;
};

map<pair<int, int>, pair<int, int>> parent;
map<pair<int, int>, node> siz;

pair<int, int> find(pair<int, int> x)
{
    if (parent[x] == x)
    {
        return x;
    }
    return parent[x] = find(parent[x]);
}

void combine(pair<int, int> x, pair<int, int> y)
{

    if (parent[x] == parent[y])
    {
        return;
    }
    else
    {
        x = parent[x];
        y = parent[y];
        if (siz[y].val > siz[x].val)
        {
            swap(x, y);
        }
        parent[y] = x;
        siz[x].val += siz[y].val;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        siz.clear();
        parent.clear();
        for (int i = 0; i <= n; i++)
        {
            parent[{i, 0}] = {i, 0};
            parent[{i, 1}] = {i, 1};
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                combine({i + 1, 0}, {i, 1});
            }
            else
            {
                combine({i, 0}, {i + 1, 1});
            }
        }
        for (int i = 0; i <= n; i++)
        {
            cout << siz[parent[{i, 0}]].val << " ";
        }
        cout << endl;
    }
}
