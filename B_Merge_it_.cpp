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
        int c = 0;
        int n2 = 0, n1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] % 3;
            if (a[i] == 0)
            {
                c++;
            }
            else if (a[i] == 1)
            {
                n1++;
            }
            else if (a[i] == 2)
            {
                n2++;
            }
        }

        if (n2 < n1)
        {
            c += n2;
            n1 = n1 - n2;
            n2 = 0;
            c += n1 / 3;
        }
        else
        {
            c += n1;
            n2 = n2 - n1;
            n1 = 0;
            c += n2 / 3;
        }

        cout << c << endl;
    }
}
