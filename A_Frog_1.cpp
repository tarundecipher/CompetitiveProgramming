#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int memo[100001];

int clc(int a[], int k, int n)
{
    if (k >= n)
    {
        return 10000;
    }
    if (memo[k] != -1)
    {
        return memo[k];
    }
    int a1 = 10000;
    int a2 = 10000;
    if (k + 1 < n)
    {
        a1 = abs(a[k + 1] - a[k]) + clc(a, k + 1, n);
    }
    if (k + 2 < n)
    {
        a2 = abs(a[k + 2] - a[k]) + clc(a, k + 2, n);
    }
    if (k == n - 1)
    {
        return 0;
    }
    memo[k] = min(a1, a2);
    return min(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << clc(a, 0, n) << endl;
    for (int i = n; i >= 0; i--)
    {
        if (i == n)
        {
            memo[i] = 10000;
        }
        else if (i == n - 1)
        {
            memo[i] = 0;
        }
        else
        {
            int a1 = 10000;
            int a2 = 10000;
            if (i + 1 < n)
            {
                a1 = abs(a[i + 1] - a[i]) + memo[i + 1];
            }
            if (i + 2 < n)
            {
                a2 = abs(a[i + 2] - a[i]) + memo[i + 2];
            }
            memo[i] = min(a1, a2);
        }
    }
    cout << memo[0] << endl;
}
