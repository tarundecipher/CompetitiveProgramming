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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i - 1 >= 0 && a[i - 1][j] == a[i][j])
                {
                    a[i][j]++;
                }
                else if (i + 1 < n && a[i + 1][j] == a[i][j])
                {
                    a[i][j]++;
                }
                else if (j + 1 < m && a[i][j + 1] == a[i][j])
                {
                    a[i][j]++;
                }
                else if (j - 1 >= 0 && a[i][j - 1] == a[i][j])
                {
                    a[i][j]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
