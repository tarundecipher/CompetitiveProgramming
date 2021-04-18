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
        int w, h, n;
        cin >> w >> h >> n;
        int c1 = 1;
        while (w % 2 == 0)
        {
            w = w / 2;
            c1 += c1;
        }
        int c2 = 1;
        while (h % 2 == 0)
        {
            h = h / 2;
            c2 += c2;
        }
        if (c1 * c2 >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
