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
        map<int, int> mp;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]])
            {
                if (!mp[a[i] + 1])
                {
                    mp[a[i] + 1]++;
                }
            }
            else
            {
                mp[a[i]]++;
            }
        }
        for (auto i : mp)
        {
            if (i.second != 0)
            {
                st.push(i.first);
            }
        }
        cout << st.size() << endl;
    }
}
