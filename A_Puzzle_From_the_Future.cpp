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
        string a;
        cin >> a;
        string ans;
        int prev = -1;
        if (a[0] == '1')
        {
            ans += '1';
            prev = 2;
        }
        else if (a[0] == '0')
        {
            ans += '1';
            prev = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '1' && prev != 2)
            {
                ans += '1';
                prev = 2;
            }
            else if (a[i] == '1' && prev == 2)
            {
                ans += '0';
                prev = 1;
            }
            else if (a[i] == '0' && prev == 1)
            {
                ans += '0';
                prev = 0;
            }
            else if (a[i] == '0' && prev != 1)
            {
                ans += '1';
                prev = 1;
            }
        }
        cout << ans << endl;
    }
}
