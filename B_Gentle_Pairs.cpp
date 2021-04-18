#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i != j)
            {
                double temp = (double)(a[j].second - a[i].second) / (double)(a[j].first - a[i].first);
                if (temp >= -1 && temp <= 1)
                {
                    // cout << i << " " << j << endl;
                    c++;
                }
            }
        }
    }
    cout << c << endl;
}
