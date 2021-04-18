#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int M = 1e9 + 7;
int dp[101][(int)1e6 + 1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        for (int sum = 0; sum <= target; sum++)
        {

            if (sum == 0)
            {
                dp[j][sum] = 1;
            }

            else
            {
                int a1 = 0;
                int a2 = 0;
                if (sum - a[j] >= 0)
                {
                    a1 = dp[j][sum - a[j]];
                }

                a2 = dp[(j + 1)][sum];

                (dp[j][sum] += a1 + a2) %= M;
            }
        }
    }
    cout << dp[0][target];
}
