#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[(int)1e6 + 1][2];

int clc(int v, int a[])
{

    if (v == 0)
    {
        return 0;
    }
    if (dp[v][0] != -1)
    {
        return dp[v][0];
    }
    int a1 = 0;
    int res = 0;
    int d = 0;

    for (int i = 1; i <= 9; i++)
    {

        if (v - a[i] >= 0)
        {
            int r = 1 + clc(v - a[i], a);
            if (r > res)
            {
                res = r;
                d = i;
            }
        }
    }
    dp[v][1] = d;
    dp[v][0] = res;
    return dp[v][0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v;
    cin >> v;
    int a[10];
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
    }
    cout << clc(v, a) << endl;
}
