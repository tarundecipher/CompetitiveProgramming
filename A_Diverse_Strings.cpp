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
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int n = s.length();
        bool cond = false;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                cond = true;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(s[i + 1] - s[i]) > 1)
            {
                cond = true;
                break;
            }
        }
        if (cond)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
