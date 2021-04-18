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
    int k = 1;
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] >= k)
        {

            res++;
            k++;
        }
    }
    cout << res << endl;
}
