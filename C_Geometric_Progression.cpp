#include <bits/stdc++.h>
#define ll unsigned long long int
#define ll1 long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];
    map<ll1, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    ll ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] % k == 0)
        {
            ll a1 = 0, a2 = 0;
            int l = 0;
            int r = mp[a[i] / k].size() - 1;

            while (l <= r)
            {
                int m = l + (r - l) / 2;
                if (mp[a[i] / k][m] < i)
                {
                    a1 = m + 1;
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
            l = 0;
            r = mp[(ll1)a[i] * k].size() - 1;
            int r1 = r;
            while (l <= r)
            {
                int m = l + (r - l) / 2;
                if (mp[a[i] * k][m] > i)
                {
                    a2 = r1 - m + 1;
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            // cout << a1 << " " << a2 << " " << a[i] << endl;

            ans += a1 * a2;
        }
    }
    cout << ans << endl;
}
