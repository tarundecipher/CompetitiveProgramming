#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int dp[(int)1e5 + 5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int M = 1000000007;
    int t, k;
    cin >> t >> k;
    for (int n = 0; n < (int)1e5 + 5; n++)
    {
        if (n == 0)
        {
            dp[n] = 1;
        }
        else
        {
            int a1 = 0;
            int a2 = 0;
            if (n - k >= 0)
            {
                a2 = a2 + dp[n - k];
            }
            a1 = a1 + dp[n - 1];
            dp[n] = (a1 % M + a2 % M) % M;
        }
    }
    int N = (int)1e5 + 5;
    int prefix[(int)1e5 + 5];
    prefix[0] = dp[0];
    for (int i = 1; i < N; i++)
    {
        prefix[i] = (prefix[i - 1] % M + dp[i] % M) % M;
    }
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int res = 0, res2 = 0;

        if (a == 0)
        {
            res = prefix[b] % M;
        }
        else
        {
            res = (prefix[b] % M - prefix[a - 1] % M + M) % M;
        }
        cout << res << endl;
    }
}
