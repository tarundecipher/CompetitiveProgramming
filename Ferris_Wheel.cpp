#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0;
    int j = n - 1;
    int ans = 0;
    while (i <= j)
    {
        if (a[i] + a[j] <= x && j != i)
        {
            i++;
            j--;
            ans++;
        }
        else if (i == j && a[i] <= x)
        {
            ans++;
            i++;
        }
        else
        {

            ans++;
            j--;
        }
    }
    cout << ans << endl;
}
