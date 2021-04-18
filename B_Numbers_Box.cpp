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
        int ne = 0;
        int sum = 0;
        int mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                sum += abs(a[i][j]);
                if (a[i][j] < 0)
                {
                    ne++;
                }
                mi = min(mi, abs(a[i][j]));
            }
        }
        if (ne % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * mi << endl;
        }
    }
}
