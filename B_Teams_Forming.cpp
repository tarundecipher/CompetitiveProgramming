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
    int sum = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        sum += abs(a[i + 1] - a[i]);
    }
    cout << sum << endl;
}
