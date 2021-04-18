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
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        map<int, int> mp2;
        int av = 0;
        int sum = 0;

        for (auto i : mp)
        {
            mp2[i.second]++;
            av = max(av, mp2[i.second]);
        }

        int ans = INT_MAX;

        for (auto j : mp2)
        {
            int ans2 = 0;
            for (auto i : mp)
            {
                if (i.second > j.first)
                {
                    ans2 += i.second - j.first;
                }
                else if (i.second < j.first)
                {
                    ans2 += i.second;
                }
            }
            ans = min(ans, ans2);
        }

        cout << ans << endl;
    }
}