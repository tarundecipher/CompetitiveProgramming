#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int a[n];
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    sort(a, a + n);
    int l, m1, m2, r;
    bool cond = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x1 = x - a[i] - a[j];
            int p1 = j + 1;
            int p2 = n - 1;
            while (p1 < p2)
            {
                if (a[p1] + a[p2] > x1)
                {
                    p2--;
                }
                else if (a[p1] + a[p2] < x1)
                {
                    p1++;
                }
                else if (a[p1] + a[p2] == x1)
                {
                    l = mp[a[i]][mp[a[i]].size() - 1];
                    mp[a[i]].pop_back();
                    m1 = mp[a[j]][mp[a[j]].size() - 1];
                    mp[a[j]].pop_back();
                    m2 = mp[a[p1]][mp[a[p1]].size() - 1];
                    mp[a[p1]].pop_back();
                    r = mp[a[p2]][mp[a[p2]].size() - 1];
                    mp[a[p2]].pop_back();
                    cond = true;
                    break;
                }
            }
            if (cond)
            {
                break;
            }
        }
        if (cond)
        {
            break;
        }
    }
    if (cond)
    {
        cout << l + 1 << " " << m1 + 1 << " " << m2 + 1 << " " << r + 1 << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
