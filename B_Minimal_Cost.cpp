#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, u, v;
        cin >> n >> u >> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool cond = false;
        bool cond2 = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i + 1] - a[i]) > 1)
            {
                cond = true;
            }
            if (abs(a[i + 1] - a[i]) == 1)
            {
                cond2 = true;
            }
        }
        if (cond)
        {
            cout << 0 << endl;
        }
        else
        {
            if (cond2 == false)
            {
                cout << min(u + v, 2 * v) << endl;
            }
            else
            {
                cout << min(u, v) << endl;
            }
        }
    }
}
