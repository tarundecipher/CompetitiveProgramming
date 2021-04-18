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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        unordered_map<int, int> mp;
        int num = 2;
        for (int i = n - 1; i >= 0; i--)
        {
            if (!mp[b[i]])
            {
                mp[b[i]] = num;
                num++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << mp[b[i]] << " ";
        }
        cout << endl;
    }
}
