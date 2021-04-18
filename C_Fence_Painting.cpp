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
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        int c[k];
        map<int, vector<int>> req;
        map<int, vector<int>> req1;
        map<int, int> index;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            index[b[i]] = i + 1;
        }
        map<int, int> painter;
        for (int i = 0; i < k; i++)
        {
            cin >> c[i];
            painter[c[i]]++;
        }
        map<int, int> mp;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                req[b[i]].push_back(i);
                req1[b[i]].push_back(i);
                mp[b[i]]++;
            }
        }
        bool cond = true;
        for (auto i : mp)
        {
            if (i.second > painter[i.first])
            {

                cond = false;
            }
            else
            {
            }
        }

        for (int j = 0; j < k; j++)
        {
            if (mp[c[j]])
            {
                last = j + 1;
            }
        }
        if (mp[c[k - 1]] == 0 && index[c[k - 1]] == 0)
        {
            cond = false;
        }
        if (cond == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> ans;
            for (int i = 0; i < k; i++)
            {
                if (req[c[i]].size() > 0)
                {

                    ans.push_back(req[c[i]].back() + 1);
                    req[c[i]].pop_back();
                    // mp[c[i]]--;
                }
                else
                {

                    if (index[c[i]])
                    {
                        ans.push_back(index[c[i]]);
                    }
                    else
                    {
                        if (req[c[k - 1]].size() > 0)
                        {

                            ans.push_back(req[c[k - 1]].back() + 1);
                        }
                        else
                        {
                            ans.push_back(index[c[k - 1]]);
                        }
                    }
                }
            }
            cout << "YES" << endl;
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
