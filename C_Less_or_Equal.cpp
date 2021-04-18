#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (k == 0)
    {
        if (a[0] - 1 >= 1)
        {
            cout << a[0] - 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        return 0;
    }
    if (a[k - 1] != a[k])
    {
        if (a[k - 1] <= 1000000000)
        {
            cout << a[k - 1];
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}
