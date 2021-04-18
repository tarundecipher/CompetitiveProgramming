#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int memo[2001][2001];

int clc(int diff[], int wt[], int k, int a, int n)
{
    if (k >= a)
    {
        if (n != -1)
        {
            return 0;
        }
        else
        {
            return 0;
        }
    }
    if (n != -1 && memo[k][n])
    {
        return memo[k][n];
    }
    int a1 = INT_MAX;
    int a2 = INT_MAX;

    if (diff[k] < 0)
    {
        if (n == -1)
        {
            if (wt[k] > 0)
            {
                a2 = clc(diff, wt, k + 1, a, k);
            }
        }
        else
        {
            a2 = wt[n] + clc(diff, wt, k + 1, a, n);
            if (wt[k] > 0)
            {
                a2 = min(a2, wt[k] + clc(diff, wt, k + 1, a, k));
            }
        }
    }
    else
    {
        if (n == -1)
        {
            a2 = clc(diff, wt, k + 1, a, n);
            if (wt[k] > 0)
            {
                a2 = min(a2, clc(diff, wt, k + 1, a, k));
            }
        }
        else
        {

            a2 = wt[n] + clc(diff, wt, k + 1, a, n);
            a2 = min(a2, wt[n] + clc(diff, wt, k + 1, a, -1));
            if (wt[k] > 0)
            {
                a2 = min(a2, wt[k] + clc(diff, wt, k + 1, a, k));
            }
        }
    }
    if (n != -1)
    {
        memo[k][n] = min(a1, a2);
    }
    return min(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, n, m;
    cin >> a >> n >> m;
    int arr[a + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        arr[l] += -1;
        if (r + 1 <= a)
        {
            arr[r + 1] -= -1;
        }
    }
    int diff[a + 1];

    int wt[a + 1];
    memset(wt, -1, sizeof(wt));
    for (int i = 0; i < m; i++)
    {
        int x, p;
        cin >> x >> p;
        wt[x] = p;
    }
    diff[0] = arr[0];
    for (int i = 1; i <= a; i++)
    {
        diff[i] = diff[i - 1] + arr[i];
    }
    memset(memo, 0, sizeof(memo));

    int x = clc(diff, wt, 0, a, -1);
    if (x >= INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << x << endl;
    }
}