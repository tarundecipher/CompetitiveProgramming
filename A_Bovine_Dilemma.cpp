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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    st.insert(abs(a[j] - a[i]));
                }
            }
        }
        // for (auto i : st)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        cout << st.size() << endl;
    }
}
