#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a[i].first = t1;
        a[i].second = t2;
    }
    sort(a, a + n, cond);
    int c = 1;
    int prev = a[0].second;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first >= prev)
        {
            prev = a[i].second;
            c++;
        }
    }
    cout << c << endl;
}
