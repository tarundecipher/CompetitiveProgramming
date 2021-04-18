#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int M = 1e9 + 7;
int dp[1001][1001];
int clc(string s[], int i, int j, int n, int m)
{
    if (i >= n || j >= m || s[i][j] == '*')
    {
        return 0;
    }
    if (i == n - 1 && j == m - 1)
    {
        return 1;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int a1 = 0;
    a1 = (clc(s, i + 1, j, n, m) % M + clc(s, i, j + 1, n, m) % M) % M;
    dp[i][j] = a1;
    return a1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << clc(s, 0, 0, n, s[0].length());
}
