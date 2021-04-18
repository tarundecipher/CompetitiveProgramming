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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        st.insert(temp);
    }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        auto it = st.upper_bound(n - a[i]);
        auto it3 = st.lower_bound(n - a[i]);
        if (it != st.end() || it3 != st.end())
        {
            if (it3 != st.end())
            {
                ans.push_back((*it3 + a[i]) % n);
                st.erase(it3);
            }
            else
            {
                ans.push_back((*it + a[i]) % n);
                st.erase(it);
            }
        }
        else
        {
            auto it2 = st.begin();
            ans.push_back((*it2 + a[i]) % n);
            st.erase(it2);
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
