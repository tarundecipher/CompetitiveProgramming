#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int res[10][10];
// bool dp[10][10][10];
bool last(int n, int k)
{
    string temp = to_string(n);
    if (temp[temp.length() - 1] - '0' == k)
    {
        return true;
    }
    return false;
}

int find(int n)
{
    string temp = to_string(n);
    return temp[temp.length() - 1] - '0';
}
int parent[(int)1e5 + 5];
int clc(int a[], int k, int n, int i)
{
    if (i >= n)
    {
        return 1;
    }
    int a1 = 0, a2 = 0;
    if (res[a[i]][clc(a, k, n, i + 1)])
    {
        a1 = a[i] * clc(a, k, n, i + 1);
    }
    if (res[1][clc(a, k, n, i + 1)])
    {
        a2 = clc(a, k, n, i + 1);
    }

    // bool cond1 = false, cond2 = false;
    // for (int i = 1; i <= 9; i++)
    // {
    //     if (res[find(a1)][i] == 1)
    //     {
    //         cond1 = true;
    //     }
    // }
    // for (int i = 1; i <= 9; i++)
    // {
    //     if (res[find(a2)][i] == 1)
    //     {
    //         cond2 = true;
    //     }
    // }

    // if (cond1 == false)
    // {
    //     a1 = 0;
    // }
    // if (cond2 == false)
    // {
    //     a2 = 0;
    // }
    return max(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(parent, 0, sizeof(parent));
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    memset(res, 0, sizeof(res));
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (last(i * j, k))
            {
                res[i][j] = 1;
                res[j][i] = 1;
            }
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    // memset(dp, 0, sizeof(dp));
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         dp[(i * j) % 10][i][j] = 1;
    //         dp[(i * j) % 10][i][j] = 1;
    //     }
    // }
    cout << clc(a, k, n, 0) << endl;
    //
    //
}
