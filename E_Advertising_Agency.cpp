#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int M = 1e9 + 7;
int memo[1001][1001];
int ncr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    if (r > n)
    {
        return 0;
    }
    if (memo[n][r] != -1)
    {
        return memo[n][r] % M;
    }

    return memo[n][r] = ncr(n - 1, r - 1) % M + ncr(n - 1, r) % M;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    memset(memo, -1, sizeof(memo));
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n, greater<int>());
        map<int, int> st;

        for (int i = 0; i < n; i++)
        {

            if (i < k)
            {
                st[a[i]]++;
            }
        }
        int ans = 1;
        for (auto i : st)
        {
            // cout << i.first << " " << mp[i.first] << " " << i.second << endl;
            ans = (ans % M * ncr(mp[i.first], i.second) % M) % M;
        }
        cout << ans << endl;
    }
}
