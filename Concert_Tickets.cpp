#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;
    int a[n];
    multiset<int> st;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    st.insert(-1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        auto l1 = st.lower_bound(a[i]);
        auto l = st.lower_bound(a[i]);
        l1--;

        if (l != st.end() && *l <= a[i])
        {
            cout << *l << endl;
            st.erase(l);
        }

        else if (*l1 <= a[i] && *l1 != -1)
        {
            cout << *(l1) << endl;
            st.erase(l1);
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
