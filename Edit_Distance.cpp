#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[5001][5001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    memset(dp, -1, sizeof(dp));
    for (int i = s.length(); i >= 0; i--)
    {
        for (int j = t.length(); j >= 0; j--)
        {
            if (i >= s.length())
            {
                dp[i][j] = t.length() - j;
            }
            else if (j >= t.length())
            {
                dp[i][j] = s.length() - i;
            }
            else
            {
                int a = 10000, b = 10000, c = 10000, d = 10000;
                if (s[i] == t[j])
                {
                    d = dp[i + 1][j + 1];
                }
                else
                {
                    a = 1 + dp[i + 1][j + 1];
                    b = 1 + dp[i + 1][j];
                    c = 1 + dp[i][j + 1];
                }
                dp[i][j] = min(a, min(b, min(c, d)));
            }
        }
    }
    cout << dp[0][0] << endl;
}
