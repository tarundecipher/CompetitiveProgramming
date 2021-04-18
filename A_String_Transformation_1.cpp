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
        string a, b;
        cin >> a >> b;

        bool cond = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                cond = false;
                break;
            }
        }
        if (cond == false)
        {
            cout << -1 << endl;
        }
        else
        {
            int res = 0;
            int p = 0;
            char prev = a[0];
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (a[j] != b[j] && a[j] != prev)
                    {
                        res++;
                        i = j - 1;
                        prev = a[j];
                        break;
                    }
                    else if (a[j] == b[j])
                    {
                        if (j - i > 0)
                        {
                            i = j - 1;
                            res++;
                        }
                        prev = a[j];
                        break;
                    }
                    else if (j == n - 1)
                    {
                        res++;
                        break;
                        i = j;
                    }
                }
            }
            cout << res << endl;
        }
    }
}
