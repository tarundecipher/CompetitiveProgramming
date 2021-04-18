#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long int
using namespace __gnu_pbds;
using namespace std;

vector<int> ans;
vector<int> jo;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    ordered_set st;
    for (int i = 0; i < n; i++)
    {
        jo.push_back(i + 1);
        st.insert(i + 1);
    }
    st.insert(1);
    auto it = st.find_by_order(0);
    auto it2 = st.find_by_order(1);
    cout << *it << " " << *it2 << endl;
}