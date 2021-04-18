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
        for (int i = 0; i < k; i++)
        {
            a[i] = i + 1;
        }
        int temp = k;
        int j = 1;
        for (int i = k; i < n; i++)
        {
            a[i] = temp - (j);
            j++;
        }
        int b[n];

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        int temp2 = b[k - 2];
        b[k - 2] = b[k - 1];
        b[k] = b[k - 1];
        b[k - 1] = temp2;

        // for (auto i : a)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        if (n == 2 || n == 1)
        {
            for (auto i : a)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            int p[k];
            for (int i = 0; i < n; i++)
            {
                p[a[i] - 1] = b[i];
            }
            for (auto i : p)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        // for (auto i : b)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
}
