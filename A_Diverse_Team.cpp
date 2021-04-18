#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int k1 = k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        else
        {
            if (!mp[a[i]])
            {
                mp[a[i]]++;
                k--;
                v.push_back(i + 1);
            }
        }
    }
    if (v.size() == k1)
    {
        cout << "YES" << endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
