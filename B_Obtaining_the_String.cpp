#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> ans;
    string t1 = s;
    string t2 = t;
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    bool cond = true;
    for (int i = 0; i < n; i++)
    {
        if (t1[i] != t2[i])
        {
            cond = false;
            break;
        }
    }
    if (cond == false)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            // cout << s[i] << " ";
            for (int j = i; j < n; j++)
            {
                if (s[j] == t[i])
                {

                    for (int p = j - 1; p >= i; p--)
                    {
                        swap(s[p], s[p + 1]);
                        ans.push_back(p + 1);
                    }
                    break;
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
