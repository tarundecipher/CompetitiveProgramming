#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    int a[n + 1];
    a[0] = 0;

    int b[n + 2];
    b[0] = 0;

    set<int> st;
    st.insert(0);
    st.insert(x);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        st.insert(a[i]);
    }
    b[n + 1] = x;
    sort(b, b + n + 2);

    int mi = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        mi = max(mi, b[i] - b[i - 1]);
    }

    vector<int> ans;
    ans.push_back(mi);
    for (int i = n; i >= 2; i--)
    {
        auto j = st.lower_bound(a[i]);
        j--;

        auto j1 = st.upper_bound(a[i]);
        mi = max(mi, *j1 - *j);

        st.erase(a[i]);
        ans.push_back(mi);
    }

    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
