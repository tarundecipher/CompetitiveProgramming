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
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<int> bases;
    for (int i = 0; i < n; i++)
    {
        auto it = bases.upper_bound(a[i]);
        if (it == bases.end())
        {
            bases.insert(a[i]);
        }
        else
        {
            bases.erase(it);
            bases.insert(a[i]);
        }
    }
    cout << bases.size() << endl;
}
