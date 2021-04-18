#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int memo[100001];

int clc(int a[], int k, int n, int p)
{

    if (memo[k] != -1)
    {
        return memo[k];
    }
    int a1 = INT_MAX;
    for (int i = k + 1; i <= min(n - 1, k + p); i++)
    {
        a1 = min(a1, abs(a[i] - a[k]) + clc(a, i, n, p));
    }
    if (k == n - 1)
    {
        return 0;
    }
    memo[k] = a1;
    return a1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int k;
    cin >> n;
    cin >> k;
    int a[n];
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << clc(a, 0, n, k) << endl;
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
            int a1 = INT_MAX;

            for (int j = i + 1; j <= min(n - 1, i + k); j++)
            {
                a1 = min(a1, abs(a[j] - a[i]) + memo[j]);
            }
            memo[i] = a1;
        }
    }
    cout << memo[0] << endl;
}
