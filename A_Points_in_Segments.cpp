#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            mp[j]++;
        }
    }
    vector<int> res;
    for (int i = 1; i <= m; i++)
    {
        if (!mp[i])
        {
            res.push_back(i);
        }
    }
    cout << res.size() << endl;
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
}
