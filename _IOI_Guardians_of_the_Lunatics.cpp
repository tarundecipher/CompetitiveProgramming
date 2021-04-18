#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int memo[100][10000];

int clc(int arr[], int k, int sum, int n)
{
    if (k >= n)
    {
        return 0;
    }
    if (memo[k][sum] != -1)
    {
        return memo[k][sum];
    }
    int a1 = 0;
    int a2 = 0;
    if (sum - arr[k] >= 0)
    {
        a1 = arr[k] + clc(arr, k + 1, sum - arr[k], n);
    }
    a2 = clc(arr, k + 1, sum, n);
    memo[k][sum] = max(a1, a2);
    return max(a1, a2);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    memset(memo, -1, sizeof(memo));
    int sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << clc(arr, 0, sum / 2, n) << endl;
    return 0;
}
