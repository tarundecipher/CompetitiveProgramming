#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string a, b;

bool same(int l1, int r1, int l2)
{
    for (int i = 0; i < r1 - l1 + 1; i++)
    {
        if (a[l1 + i] != b[l2 + i])
        {
            return 0;
        }
    }
    return 1;
}

bool clc(int l1, int r1, int l2, int r2)
{
    if ((r1 - l1 + 1) != (r2 - l2 + 1) || l1 > r1 || r2 < l2)
    {
        return 0;
    }

    if (same(l1, r1, l2))
    {

        return 1;
    }

    if ((r1 - l1 + 1) % 2)
    {
        return 0;
    }
    bool cond = 0;
    int m1 = l1 + (r1 - l1) / 2;
    int m2 = l2 + (r2 - l2) / 2;
    cond |= (clc(l1, m1, m2 + 1, r2) && clc(m1 + 1, r1, l2, m2));

    if (!cond)
    {
        cond |= clc(l1, m1, l2, m2) && clc(m1 + 1, r1, m2 + 1, r2);
    }

    return cond;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    int na = a.length();

    bool cond = clc(0, na - 1, 0, na - 1);
    if (cond)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
