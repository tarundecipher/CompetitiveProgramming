#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n + 1];
    memset(prefix, 0, sizeof(prefix));
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            prefix[i] = prefix[i - 1];
        }
        else
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
    }

    int prefix2[n + 1];
    memset(prefix2, 0, sizeof(prefix2));
    prefix2[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            prefix2[i] = prefix2[i - 1] + a[i];
        }
        else
        {
            prefix2[i] = prefix2[i - 1];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            if (i == 0)
            {
                if ((prefix[n - 1] - prefix[0]) == (prefix2[n - 1] - prefix2[0]))
                {
                    res++;
                }
            }
            else
            {
                if ((prefix[n - 2]) == (prefix2[n - 2]))
                {
                    res++;
                }
            }
        }
        else
        {
            int a = prefix[i - 1] + (prefix2[n - 1] - prefix2[i]);
            int b = prefix2[i - 1] + (prefix[n - 1] - prefix[i]);
            if (a == b)
            {
                res++;
            }
        }
    }
    cout << res << endl;
}
