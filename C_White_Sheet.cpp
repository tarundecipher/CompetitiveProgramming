#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    int x5, y5, x6, y6;
    cin >> x5 >> y5 >> x6 >> y6;

    bool cond = false;

    if (x4 >= x2 && y4 >= y2 && x3 <= x1 && y3 <= y1)
    {
        cout << 'a';
        cond = true;
    }
    else if (x6 >= x2 && y6 >= y2 && x5 <= x1 && y5 <= y1)
    {
        cout << 'b';
        cond = true;
    }
    else if (x4 - x3 >= x2 - x1 && x6 - x5 >= x2 - x1)
    {
        if ((y6 - y5) + (y4 - y3) >= y2 - y1)
        {
            if (x2 <= x4 && y2 <= y4 && x1 >= x3)
            {
                if (x1 >= x5 && x2 <= x6)
                    cout << 'c';
                cond = true;
            }
        }
    }
    else if (y4 - y3 >= y2 - y1 && y6 - y5 >= y2 - y1)
    {
        if ((x4 - x3) + (x6 - x5) >= x2 - x1)
        {
            cout << 'd';
            cond = true;
        }
    }
    if (cond == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
