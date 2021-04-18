#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int r[n];
        int b[m];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }

        sort(r, r + n);
        sort(b, b + m);

        vector<pair<int, int>> v;
        int p1 = 0;
        int p2 = 0;
        while (p1 < n && p2 < m)
        {
            if (r[p1] < b[p2])
            {
                v.push_back({r[p1], 1});
                p1++;
            }
            else
            {
                v.push_back({b[p2], 0});
                p2++;
            }
        }
        while (p1 < n)
        {
            v.push_back({r[p1], 1});
            p1++;
        }
        while (p2 < m)
        {
            v.push_back({b[p2], 0});
            p2++;
        }
        int ma = 0;
        int c = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second == 1 && !mp[v[i].first])
            {
                c++;
            }
            else
            {
                ma = max(c, ma);
                c = 0;
            }
        }
        ma = max(c, ma);
        bool cond = true;
        for (int i = 0; i < n; i++)
        {
            if (!mp[r[i]])
            {
                cond = false;
            }
        }
        if (cond)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << ma << endl;
        }
    }
}
