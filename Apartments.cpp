#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<int> b;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        b.insert(temp);
    }

    sort(a, a + n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        auto l = b.lower_bound(a[i] - k);

        if (*l >= a[i] - k && *l <= a[i] + k)
        {
            b.erase(l);
            c++;
        }
    }
    cout << c << endl;
}
