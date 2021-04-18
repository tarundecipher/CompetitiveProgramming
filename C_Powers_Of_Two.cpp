#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int ans[k];
    for (int i = 0; i < k; i++)
    {
        ans[i] = 1;
    }
    int sum = k;
    for (int i = 0; i < k; i++)
    {
        while (sum + ans[i] <= n)
        {
            sum += ans[i];
            ans[i] = 2 * ans[i];
        }
    }
    if (sum == n)
    {
        cout << "YES" << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
