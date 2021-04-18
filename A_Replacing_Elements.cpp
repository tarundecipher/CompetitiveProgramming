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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = a[0];
        int y = a[1];
        bool cond = false;
        if (x + y <= k)
        {
            cond = true;
        }
        bool cond2 = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > k)
            {
                cond2 = false;
                break;
            }
        }
        if (cond2)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (cond)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
