#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[1001][(int)1e5 + 1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int price[n], pages[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int sum = 0; sum <= x; sum++)
        {

            int a1 = 0;
            int a2 = 0;
            if (sum - price[i] >= 0)
            {
                a1 = pages[i] + dp[i + 1][sum - price[i]];
            }
            a2 = dp[i + 1][sum];
            dp[i][sum] = max(a1, a2);
        }
    }

    cout << dp[0][x] << endl;
}
