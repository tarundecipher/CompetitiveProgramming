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
        int n, x;
        cin >> n >> x;
        string s;

        cin >> s;
        // string temp = s;

        // n = s.length();
        int pre1[n];
        int pre0[n];
        // memset(pre1, 0, sizeof(pre1));
        // memset(pre0, 0, sizeof(pre0));
        if (s[0] == '0')
        {
            pre1[0] = 0;
            pre0[0] = 1;
        }
        else
        {
            pre1[0] = 1;
            pre0[0] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                pre1[i] = pre1[i - 1] + 1;
                pre0[i] = pre0[i - 1];
            }
            else
            {
                pre0[i] = pre0[i - 1] + 1;
                pre1[i] = pre1[i - 1];
            }
        }
        int final[n];

        for (int i = 0; i < n; i++)
        {
            final[i] = pre0[i] - pre1[i];
        }
        int diff = final[n - 1];

        int ans = 0;
        bool cond = false;
        for (int i = 0; i < n; i++)
        {
            if (final[i] == x)
            {
                ans++;
                cond = true;
            }
            else
            {
                if (x - final[i] > 0 && diff > 0 && (x - final[i]) % diff == 0)
                {
                    ans++;
                }
                else if (x - final[i] < 0 && diff < 0 && (x - final[i]) % diff == 0)
                {
                    ans++;
                }
            }
            // cout << final[i] << " ";
        }
        if (x == 0)
        {
            ans++;
        }
        if (cond && diff == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}
