#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int dp[(int)1e6 + 1];
const int M = 1e9 + 7;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // memset(dp, 0, sizeof(dp));
    int n, target;
    cin >> n >> target;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    dp[0] = 1;
    for (int sum = 1; sum <= target; sum++)
    {

        for (int i = 0; i < n; i++)
        {

            if (sum - a[i] >= 0)
            {
                (dp[sum] += dp[sum - a[i]]) %= M;
            }
        }
    }
    cout << dp[target] << endl;
}