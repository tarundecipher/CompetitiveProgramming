#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool islucky(int n, int d)
{
    string temp = to_string(n);
    bool cond = false;
    for (int i = 0; i < temp.length(); i++)
    {
        if ((temp[i] - '0') == d)
        {
            cond = true;
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

        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {

            bool cond = false;
            int a1 = a[i];
            while (a[i] - d >= 0)
            {
                if (islucky(a[i], d))
                {
                    cond = true;
                    break;
                }
                else
                {
                    a[i] = a[i] - d;
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
