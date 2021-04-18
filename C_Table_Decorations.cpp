#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, g, b;
    cin >> r >> g >> b;
    int res = min(r, min(g, b));
    if (res == r)
    {
        if (max(g - res, b - res) >= 2 * min(g - res, b - res))
        {
            res += min(g - res, b - res);
        }
        else
        {
            res += (max(g - res, b - res) - min(g - res, b - res)) / 2;
        }
    }
    else if (res == g)
    {
        res += min(max(r - res, b - res) / 2, min(r - res, b - res));
    }
    else if (res == b)
    {
        res += min(max(g - res, r - res) / 2, min(g - res, r - res));
    }
    cout << res << endl;
}
