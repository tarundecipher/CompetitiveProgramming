#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define ll long long int
using namespace std;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ordered_set st;
    for (int i = 0; i < k; i++)
    {
        st.insert(a[i]);
    }
    if (k % 2)
    {
        auto x = st.find_by_order(k / 2);
        cout << *x << " ";
        for (int i = k; i < n; i++)
        {

            auto it = st.order_of_key(a[i - k]);
            auto it2 = st.find_by_order(it);
            st.erase(it2);
            st.insert(a[i]);
            auto p = st.find_by_order(k / 2);
            cout << *p << " ";
        }
    }
    else
    {
        auto x = st.find_by_order(k / 2 - 1);
        cout << *x << " ";
        for (int i = k; i < n; i++)
        {

            auto it = st.order_of_key(a[i - k]);
            auto it2 = st.find_by_order(it);
            st.erase(it2);
            st.insert(a[i]);

            auto p = st.find_by_order(k / 2 - 1);
            cout << *p << " ";
        }
    }
}
