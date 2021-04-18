#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int parent[(int)1e5 + 5];

int find(int a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = find(parent[a]);
}

void uni(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
        parent[b] = a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < (int)1e5 + 2; i++)
    {
        parent[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        uni(t1, t2);
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << " " << find(i) << endl;
    // }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
        {
            ans.push_back(i);
        }
    }
    cout << ans.size() - 1 << endl;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " " << ans[i + 1] << endl;
    }
}
