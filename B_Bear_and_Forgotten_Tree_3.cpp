#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, h;
    cin >> n >> d >> h;
    if (d - h > h || (n > 2 && d == 1))
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 1; i <= h; i++)
        {
            cout << i << " " << i + 1 << endl;
        }
        if (d != h)
        {
            if (h + 2 <= n)
            {

                cout << 1 << " " << h + 2 << endl;
            }
            for (int i = h + 2; i < h + 1 + (d - h); i++)
            {
                cout << i << " " << i + 1 << endl;
            }

            for (int i = h + 2 + (d - h); i <= n; i++)
            {
                cout << 1 << " " << i << endl;
            }
        }
        else
        {
            for (int i = h + 2; i <= n; i++)
            {
                if (i != 2)
                {
                    cout << 2 << " " << i << endl;
                }
            }
        }
    }
}
