#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool fine(string temp, string a[], int n, int m)
{
    bool cond = true;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < m; j++)
        {
            if (temp[j] != a[i][j])
            {
                c++;
            }
        }
        if (c > 1)
        {
            cond = false;
            break;
        }
    }
    return cond;
}

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
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string temp = a[0];
        string ans = ".";
        if (n > 1)
        {
            for (int j = 0; j < n; j++)
            {
                for (int i = 0; i < m; i++)
                {
                    temp[i] = a[j][i];
                    if (fine(temp, a, n, m))
                    {
                        ans = temp;
                    }
                    temp[i] = a[0][i];
                }
            }
        }

        else
        {
            ans = temp;
        }
        if (ans != ".")
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
