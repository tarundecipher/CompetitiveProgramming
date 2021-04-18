#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int a[n];
    int c1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            c1++;
        }
    }
    while (q--)
    {
        int a1, b;
        cin >> a1 >> b;
        if (a1 == 1)
        {
            if (a[b - 1] == 1)
            {
                c1--;
                a[b - 1] = 0;
            }
            else
            {
                c1++;
                a[b - 1] = 1;
            }
        }
        else if (a1 == 2)
        {
            if (b <= c1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}
