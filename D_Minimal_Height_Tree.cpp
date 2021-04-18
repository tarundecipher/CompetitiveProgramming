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
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 0;
        int h[n];
        h[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                res++;
            }
            h[i] = h[res] + 1;
        }
        cout << h[n - 1] << endl;
    }
}
