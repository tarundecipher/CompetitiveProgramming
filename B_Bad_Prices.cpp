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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int prefix[n];
        prefix[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            prefix[i] = min(prefix[i + 1], a[i]);
        }

        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (prefix[i + 1] < a[i])
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
