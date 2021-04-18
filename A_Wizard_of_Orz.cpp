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
        int n;
        cin >> n;
        int a[n];
        if (n == 1)
        {
            cout << 9 << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << 98 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << 989 << endl;
            continue;
        }
        else
        {
            a[0] = 9;
            a[1] = 8;
            a[2] = 9;
            int j = 0;
            for (int i = 3; i < n; i++)
            {
                a[i] = j;
                if (j == 9)
                {
                    j = 0;
                }
                else
                {
                    j++;
                }
            }
        }

        for (auto i : a)
        {
            cout << i;
        }
        cout << endl;
    }
}
