#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n], d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> d[i];
    }
    sort(a, a + n);
    sort(d, d + n);
    int i = 0;
    int j = 0;
    int ans = 0;
    int c = 0;
    while (i < n)
    {
        if (a[i] < d[j])
        {
            c++;
            i++;
        }
        else
        {
            c--;
            j++;
        }
        ans = max(ans, c);
    }
    cout << ans << endl;
}
