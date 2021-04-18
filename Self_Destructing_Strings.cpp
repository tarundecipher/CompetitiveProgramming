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
        string s;
        cin >> s;
        int n = s.length();
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int n1 = 0, n0 = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    n1++;
                }
                else
                {
                    n0++;
                }
            }
            if (n1 == n || n0 == n)
            {
                cout << -1 << endl;
            }
            else
            {

                int res = 0;
                if (n1 != n / 2)
                {
                    cout << abs(n1 - n / 2) << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
    }
}
