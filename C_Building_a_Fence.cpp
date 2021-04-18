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
        int n, k;
        cin >> n >> k;
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int mi = h[0];
        int ma = h[0];
        bool cond = true;
        for (int i = 1; i < n - 1; i++)
        {
            mi = max(mi - (k - 1), h[i]);
            ma = min(ma + (k - 1), h[i] + k - 1);
            if (mi > ma)
            {
                cout << "no" << endl;
                cond = false;
                break;
            }
        }
        if (cond)
        {
            if (h[n - 1] + (k - 1) < mi || h[n - 1] - (k - 1) > ma)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
    }
}
