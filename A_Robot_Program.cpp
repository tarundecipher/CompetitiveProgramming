#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    // memo.clear();
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int ans = 0;
        if (x < y)
        {
            swap(x, y);
        }
        ans = 2 * y;
        int diff = x - y;
        if (diff > 0)
        {
            diff--;
            ans++;
        }

        ans += 2 * diff;
        cout << ans << endl;
    }
}
