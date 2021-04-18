#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> a[n + 100];

    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a[i + 1] = {t1, t2};
    }
    vector<int> ans(n + 100, 1);
    ans[0] = 1;
    if (a[1].second == a[a[1].first].second || a[1].second == a[a[1].first].first)
    {
        ans[1] = (a[1].first);
        ans[2] = (a[1].second);
    }
    else
    {
        ans[1] = (a[1].second);
        ans[2] = (a[1].first);
    }
    int p2 = 1;
    int p3 = 3;
    while (ans[p3 - 1] != 1)
    {
        if (a[ans[p2]].first != ans[p2 + 1])
        {
            ans[p3] = (a[ans[p2]].first);
        }
        else
        {
            ans[p3] = (a[ans[p2]].second);
        }
        p2++;
        p3++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
