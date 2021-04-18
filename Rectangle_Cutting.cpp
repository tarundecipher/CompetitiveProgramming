#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[501][501];

int clc(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (dp[a][b] != -1)
    {
        return dp[a][b];
    }

    int a1 = 100000;
    int a2 = 100000;
    if (a < b)
    {
        a1 = 1 + clc(a, a) + clc(a, b - a);
    }
    if (b < a)
    {
        a2 = 1 + clc(b, b) + clc(a - b, b);
    }
    dp[a][b] = min(a1, a2);
    return min(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    cout << clc(a, b) << endl;
}
