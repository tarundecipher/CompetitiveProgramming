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
        int cnt[2][n];
        if (a[0] == '0')
        {
            cnt[0][0] = 1;
            cnt[1][0] = 0;
        }
        else
        {
            cnt[0][0] = 0;
            cnt[1][0] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '0')
            {
                cnt[0][i] = cnt[0][i - 1] + 1;
                cnt[1][i] = cnt[1][i - 1];
            }
            else
            {
                cnt[0][i] = cnt[0][i - 1];
                cnt[1][i] = cnt[1][i - 1] + 1;
            }
        }
        bool cond = false;
        bool flip = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i] && flip == false)
            {
                if (cnt[0][i] != cnt[1][i])
                {
                    cond = true;
                    break;
                }
                else
                {
                    if (flip == false)
                    {
                        flip = true;
                    }
                    else
                    {
                        flip = false;
                    }
                }
            }
            else if (a[i] == b[i] && flip == true)
            {
                if (cnt[0][i] != cnt[1][i])
                {
                    cond = true;
                    break;
                }
                else
                {
                    if (flip == false)
                    {
                        flip = true;
                    }
                    else
                    {
                        flip = false;
                    }
                }
            }
        }

        if (cond)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << cnt[0][i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << cnt[1][i] << " ";
        // }
        // cout << endl;
    }
}
