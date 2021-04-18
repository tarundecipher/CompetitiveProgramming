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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            string temp = s.substr(l, r - l + 1);
            int ind = 0;
            int ind2 = 0;
            int skips = 0;
            for (int i = 0; i < n; i++)
            {
                if (ind < r - l)
                {
                    if (s[i] == temp[ind])
                    {
                        ind++;
                    }
                    else
                    {
                        if (ind != 0)
                        {
                            skips++;
                        }
                    }
                }
                else
                {
                    ind2 = i;
                    break;
                }
            }
            bool cond = false;
            if (skips == 0)
            {
                for (int i = ind2 + 1; i < n; i++)
                {
                    if (temp[r - l] == s[i])
                    {
                        cond = true;
                        break;
                    }
                }
            }
            else
            {
                for (int i = ind2; i < n; i++)
                {
                    if (temp[r - l] == s[i])
                    {
                        cond = true;
                        break;
                    }
                }
            }

            if (cond)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
