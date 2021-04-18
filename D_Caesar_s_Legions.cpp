#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[3][11][101][101];

const int M = 1e8;

int clc(int k1, int k2, int x, int k, int p, int n1, int n2)
{
    if (p == 0)
    {
        return 1;
    }
    if (dp[x][k][n1][n2] != -1)
    {
        return dp[x][k][n1];
    }
    int a1 = 0;
    int a2 = 0;
    if (k < k1 && x == 1 && n1 > 0)
    {
        a1 = a1 + clc(k1, k2, 1, k + 1, p - 1, n1 - 1, n2);
    }
    else if (x != 1 && n1 > 0)
    {
        a1 = a1 + clc(k1, k2, 1, 1, p - 1, n1 - 1, n2);
    }

    if (k < k2 && x == 2 && n2 > 0)
    {
        a2 = a2 + clc(k1, k2, 2, k + 1, p - 1, n1, n2 - 1);
    }
    else if (x != 2 && n2 > 0)
    {
        a2 = a2 + clc(k1, k2, 2, 1, p - 1, n1, n2 - 1);
    }
    dp[x][k][n1][n2] = (a1 % M + a2 % M) % M;
    return dp[x][k][n1][n2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    cout << clc(k1, k2, 0, 0, n1 + n2, n1, n2) << endl;
}
