#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[(int)1e6 + 1];

int parent[(int)1e6 + 1];
map<int, int> mp;

int clc(int v, int a[])
{

    if (v <= 0)
    {
        return 0;
    }
    if (dp[v] != -1)
    {
        return dp[v];
    }
    int a1 = 0;
    int res = 0;
    int d = 0;

    for (int i = 0; i < 9; i++)
    {

        if (v - a[i] >= 0)
        {
            int r = 1 + clc(v - a[i], a);
            if (r >= res)
            {
                res = r;
                parent[v] = v - a[i];
            }
        }
    }

    dp[v] = res;
    return dp[v];
}

void print(int v, int a[])
{
    if (v <= 0)
    {
        return;
    }
    if (mp[v - parent[v]] != 0)
    {
        cout << mp[v - parent[v]];

        print(parent[v], a);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v;
    cin >> v;
    int a[11];
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        mp[a[i]] = i + 1;
    }

    int res = clc(v, a);
    if (res == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        print(v, a);
    }
}