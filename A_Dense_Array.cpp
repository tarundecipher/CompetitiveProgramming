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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (max(a[i], a[i + 1]) > 2 * min(a[i], a[i + 1]))
            {
                if (a[i] < a[i + 1])
                {
                    c++;
                    a[i] = 2 * a[i];
                    i--;
                }
                else
                {
                    c++;
                    a[i] = ceil((double)a[i] / (double)2);
                    i--;
                }
            }
        }
        cout << c << endl;
    }
}
