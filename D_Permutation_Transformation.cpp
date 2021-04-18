#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int d[(int)1e5];

void clc(int a[], int l, int r, int depth)
{
    if (l > r)
    {
        return;
    }
    int ma = 0;
    int ind = 0;
    // cout << l << " " << r << endl;
    for (int i = l; i <= r; i++)
    {
        if (a[i] > ma)
        {
            ma = a[i];
            ind = i;
        }
    }
    d[ind] = depth + 1;

    clc(a, l, ind - 1, depth + 1);
    clc(a, ind + 1, r, depth + 1);
    return;
}

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
        memset(d, 0, sizeof(d));
        clc(a, 0, n - 1, -1);
        for (int i = 0; i < n; i++)
        {
            cout << d[i] << " ";
        }
        cout << endl;
    }
}
