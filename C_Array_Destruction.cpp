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

        n = 2 * n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a, a + n);
        vector<pair<int, int>> ans;
        bool cond = false;
        int temp;

        for (int i = 0; i < n - 1; i++)
        {
            vector<pair<int, int>> res;
            map<int, int> mp2 = mp;
            int x = a[n - 1];
            temp = a[n - 1] + a[i];
            res.push_back({a[n - 1], a[i]});
            mp2[a[n - 1]]--;
            mp2[a[i]]--;
            int p = n - 2;
            // cout << temp << endl;
            while (p > 0)
            {
                if (mp2[a[p]] > 0 && x - a[p] != a[p] && mp2[x - a[p]] != 0)
                {
                    res.push_back({a[p], x - a[p]});

                    mp2[x - a[p]]--;
                    x = a[p];
                    mp2[x]--;
                    p--;
                    if (mp2[p] == 0)
                    {
                        p--;
                    }
                }
                else if (mp2[a[p]] > 0 && x - a[p] == a[p] && mp2[x - a[p]] > 1)
                {
                    res.push_back({a[p], x - a[p]});
                    mp2[x - a[p]]--;
                    x = a[p];
                    mp2[x]--;
                    p--;
                    if (mp2[p] == 0)
                    {
                        p--;
                    }
                }
                else if (mp2[a[p]] == 0)
                {
                    p--;
                }
                else
                {
                    // cout << x << " " << a[p] << endl;
                    break;
                }
            }
            // for (auto i : res)
            // {
            //     cout << i.first << " " << i.second << " " << endl;
            // }

            // cout << endl;
            if (res.size() == n / 2)
            {
                ans = res;
                cond = true;
                break;
            }
        }
        if (cond)
        {
            cout << "YES" << endl;
            cout << temp << endl;
            for (auto i : ans)
            {
                cout << i.first << " " << i.second << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
