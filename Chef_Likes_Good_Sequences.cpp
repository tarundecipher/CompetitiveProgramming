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

        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> fi;
        int ma = 1;
        while (q--)
        {

            int x, y;
            cin >> x >> y;
            x--;
            a[x] = y;
            if (binary_search(fi.begin(), fi.end(), x))
            {
                auto it = lower_bound(fi.begin(), fi.end(), x);
                int t1 = *it;
                if (t1 > 0 && t1 < n - 1)
                {
                    if (a[t1 - 1] == y || a[t1 + 1] == y)
                    {
                        ma--;
                    }
                }
                else if (t1 == 0)
                {
                    if (a[t1 + 1] == y)
                    {
                        ma--;
                    }
                }
                else if (t1 == n - 1)
                {
                    if (a[t1 - 1] == y)
                    {
                        ma--;
                    }
                }
            }
            else
            {
                if (fi.size() > 0)
                {
                    auto it = lower_bound(fi.begin(), fi.end(), x);
                    auto it2 = upper_bound(fi.begin(), fi.end(), x);
                    int t1 = *it;
                    int t2 = *it2;
                    if (a[t1] != y && a[t2] != y)
                    {
                        ma++;
                                        }
                }
            }
            int c = 1;

            int prev = 0;
            vector<int> v;
            v.push_back(0);
            for (int i = 1; i < n; i++)
            {
                if (a[prev] != a[i])
                {
                    c++;
                    prev = i;
                    v.push_back(i);
                }
            }
            cout << c << endl;
            ma = c;
            fi = v;
        }
    }
}
