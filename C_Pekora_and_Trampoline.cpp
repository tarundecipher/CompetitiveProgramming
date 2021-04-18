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
        ll s = 1e12;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                x++;
            }
        }
        if (x == n)
        {
            cout << 0 << endl;
        }
        else
        {
            int c = 1;
            int i = 0;

            while (i < n && s > 0)
            {

                int ind = i;
                while (ind < n)
                {
                    int sum = a[ind];
                    a[ind] = max(1, a[ind] - 1);
                    ind = ind + sum;
                }
                // for (int j = 0; j < n; j++)
                // {
                //     cout << a[j] << " ";
                // }
                // cout << endl;

                bool cond = true;
                for (int j = 0; j < n; j++)
                {
                    if (a[j] != 1)
                    {
                        cond = false;
                        break;
                    }
                }
                if (cond)
                {

                    break;
                }
                else
                {

                    c++;
                }
                if (a[i] == 1)
                {
                    i++;
                }
                s--;
            }
            cout << c << endl;
        }
    }
}
