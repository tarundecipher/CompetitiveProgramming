#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[(int)1e6 + 6];
int clc(int sum, int a[], int n)
{
    if (sum == 0)
    {
        return 0;
    }
    if (sum < 0)
    {
        return 10000000;
    }
    if (dp[sum] != -1)
    {
        return dp[sum];
    }
    int a1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        a1 = min(a1, 1 + clc(sum - a[i], a, n));
    }
    dp[sum] = a1;
    return a1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n, target;
    cin >> n >> target;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x = clc(target, a, n);
    if (x >= 10000000)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << x << endl;
    }
}
