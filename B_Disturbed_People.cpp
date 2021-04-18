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
    int c = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1)
        {
            c++;
            a[i + 1] = 0;
        }
    }
    cout << c << endl;
}
