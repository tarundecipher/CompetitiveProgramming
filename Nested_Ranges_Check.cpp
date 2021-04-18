#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.first == b.first)
    {
        if (a.second < b.second)
        {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> b[n];
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        b[i].first = t1;
        b[i].second = t2;
        st.insert(b[i]);
    }
    st.insert({2, 5});
    for (int i = 0; i < n; i++)
    {
        auto it = st.lower_bound(b[i]);
        auto it2 = st.upper_bound(b[i]);
        cout << it->first << " " << it->second << "-" << it2->first << " " << it2->second << endl;
    }
}
