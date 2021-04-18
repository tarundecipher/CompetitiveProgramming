#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[(int)1e6 + 6];

int main()
{
    int M = 1e9 + 7;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int sum = (int)1e6 + 6; sum >= 0; sum--)
    {
        if (sum > n)
        {
            dp[sum] = 0;
        }
        else if (sum == n)
        {
            dp[sum] = 1;
        }
        else
        {
            int a1 = 0;
            for (int i = 1; i <= 6; i++)
            {
                a1 = (a1 % M + dp[sum + i] % M) % M;
            }
            dp[sum] = a1;
        }
    }
    cout << dp[0] % M << endl;
}
