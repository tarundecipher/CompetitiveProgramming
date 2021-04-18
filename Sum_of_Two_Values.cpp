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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i + 1;
    }
    int l = -1;
    int r = -1;
    for (int i = 0; i < n; i++)
    {
        if (mp[x - a[i]] != 0 && mp[x - a[i]] != i + 1)
        {
            l = i + 1;
            r = mp[x - a[i]];
        }
    }
    if (l == -1)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << l << " " << r << endl;
    }
}
