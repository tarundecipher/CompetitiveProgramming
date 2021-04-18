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
        int ind1 = -1, ind2 = -1;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i - 1] < a[i])
            {
                ind1 = i - 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[ind1] < a[i])
            {
                ind2 = i;
                break;
            }
        }
        if (ind1 == -1)
        {
            cout << ind1 << endl;
        }
        else
        {
            swap(a[ind1], a[ind2]);
            reverse(a + ind1 + 1, a + n);

            for (int i = 0; i < n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
    }
}
