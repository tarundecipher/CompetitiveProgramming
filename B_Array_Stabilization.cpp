#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[n - 1] - a[1] < a[n - 2] - a[0])
    {
        cout << a[n - 1] - a[1] << endl;
    }
    else
    {
        cout << a[n - 2] - a[0] << endl;
    }
}
