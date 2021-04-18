#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int memo[100001][3];

// int clc(int a[][3], int n, int k, int c)
// {
//     if (k >= n)
//     {
//         return 0;
//     }
//     if (c != -1 && memo[k][c] != -1)
//     {
//         return memo[k][c];
//     }
//     int a1 = 0;
//     int a2 = 0;
//     int a3 = 0;
//     if (c != 0)
//     {
//         a1 = a[k][0] + clc(a, n, k + 1, 0);
//     }
//     if (c != 1)
//     {
//         a2 = a[k][1] + clc(a, n, k + 1, 1);
//     }
//     if (c != 2)
//     {
//         a3 = a[k][2] + clc(a, n, k + 1, 2);
//     }
//     memo[k][c] = max(a1, max(a2, a3));
//     return max(a1, max(a2, a3));
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[100001][3];
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++)
    {
        int a1, b, c;
        cin >> a1 >> b >> c;
        a[i][0] = a1;
        a[i][1] = b;
        a[i][2] = c;
    }
    // cout << clc(a, n, 0, -1) << endl;
    for (int k = n; k >= 0; k--)
    {
        for (int c = 0; c < 3; c++)
        {
            if (k == n)
            {
                memo[k][c] = 0;
            }
            else
            {
                int a1 = 0, a2 = 0, a3 = 0;
                if (c != 0)
                {
                    a1 = a[k][0] + memo[k + 1][0];
                }
                if (c != 1)
                {
                    a2 = a[k][1] + memo[k + 1][1];
                }
                if (c != 2)
                {
                    a3 = a[k][2] + memo[k + 1][2];
                }
                memo[k][c] = max(a1, max(a2, a3));
            }
        }
    }
    cout << max(memo[0][0], max(memo[0][1], memo[0][2])) << endl;
}
