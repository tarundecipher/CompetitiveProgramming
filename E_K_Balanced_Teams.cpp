#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int memo[5002][5002];
int clc(int a[], int i, int j, int k, int n)
{
    if (memo[i][k] != 0)
    {

        return memo[i][k];
    }
    if (j >= n || k <= 0)
    {
        return 0;
    }

    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    if (k > 0 && a[j] - a[i] <= 5)
    {
        a1 = (j - i + 1) + clc(a, j + 1, j + 1, k - 1, n);
    }
    if (i + 1 <= j && a[j] - a[i] > 5)
    {
        a2 = clc(a, i + 1, j, k, n);
    }
    else
    {
        a3 = clc(a, i, j + 1, k, n);
    }

    memo[i][k] = max(a1, max(a2, a3));
    return memo[i][k];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    memo[0][0] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << clc(a, 0, 0, k, n);
}
