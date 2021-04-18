#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(string t, string s, int a[], int m)
{
    map<int, int> mp;
    for (int i = 0; i <= m; i++)
    {

        mp[a[i] - 1]++;
    }
    int j = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (mp[i])
        {
            continue;
        }

        if (t[i] == s[j])
        {
            j++;
        }
    }

    if (j == s.length())
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string t;
    cin >> t;
    string s;
    cin >> s;
    int a[t.length()];
    for (int i = 0; i < t.length(); i++)
    {
        cin >> a[i];
    }
    int l = -1;
    int r = t.length() - 1;
    int ans = 0;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        // cout << m << endl;
        if (check(t, s, a, m))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    // cout << check(t, s, a, 2);
    cout << ans + 1 << endl;
}
