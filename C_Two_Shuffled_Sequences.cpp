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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second > 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    vector<int> inc, dec;

    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second > 0)
        {
            i->second--;
            inc.push_back(i->first);
        }
    }

    for (auto i = mp.crbegin(); i != mp.crend(); i++)
    {
        if (i->second > 0)
        {

            dec.push_back(i->first);
        }
    }
    cout << "YES" << endl;
    cout << inc.size() << endl;
    for (auto i : inc)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << dec.size() << endl;
    for (auto i : dec)
    {
        cout << i << " ";
    }
    cout << endl;
}
