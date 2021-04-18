#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    int ans = 0;
    int res = 0;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        res += a1[i];
        if (res < 0)
        {
            res = 0;
            prev = i;
        }
        if (i - prev + 1 >= a && i - prev + 1 <= b)
        {
            ans = max(ans, res);
        }
        if (i - prev + 1 > b)
        {
            res -= a1[prev];
            prev++;
        }
    }
    cout << ans << endl;
}
